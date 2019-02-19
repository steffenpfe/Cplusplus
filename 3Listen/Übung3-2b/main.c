#include <stdio.h>

typedef struct _Person {
    char *name;
    int age;
    float size;
    struct _Person *next;
} Person;

void printpList(Person *headOfList) {
    Person *currentElem = headOfList;
    while (currentElem != NULL) {
        printf("Name: %s\nAlter: %i\nGroesse: %.2f\n\n",currentElem->name, currentElem->age, currentElem->size);
        currentElem = currentElem->next;
    }
    printf("EOL\n");
}


char* newName(const char *name){
    char *newName = (char *)malloc((strlen(name)+1)*sizeof(char));
    sprintf(newName, "%s", name);
    return newName;
}


void removeLastElement (Person **headOfList) {
    Person *currentElem = *headOfList;
    Person *previousElem = currentElem;

    if (*headOfList != NULL) {
        while (currentElem->next != NULL) {
            previousElem = currentElem;
            currentElem = currentElem->next;
        }
        free(currentElem);

        if (previousElem != currentElem){
        previousElem->next = NULL;
        }
        else { // Verweis auf Listenkopf löschen
        *headOfList = NULL;
        }
    }
}



void insert(Person **headOfList, char* name, int age, float size){
    Person *currentElem = *headOfList;
    Person *previousElem = currentElem;

    // Neues Element erstellen
    Person *newPerson = (Person *)malloc(sizeof(Person));
    newPerson->name = name; // Listenelement Daten zuweisen
    newPerson->age = age;
    newPerson->size = size;
    newPerson->next = NULL; // Nullzeiger: Markiert Ende der Liste

    // Einfügeposition suchen
    // Prüfe, ob letztes Element noch nicht erreicht
    // Sortiere nach x und dann nach y
    while (currentElem != NULL && (currentElem->age < newPerson->age ||
                                    currentElem->age == newPerson->age &&
                                    currentElem->size < newPerson->size)) {
        previousElem = currentElem;
        currentElem = currentElem->next;
    }

    if (previousElem == currentElem) {// Suche ist beim Listenkopf stehen geblieben
    // => Als erstes Feldelement einfügen
    newPerson->next = *headOfList;
    *headOfList = newPerson;
    }
    else { // Neues Element innerhalb der Liste oder an deren Ende einfügen
        previousElem->next = newPerson;
        newPerson->next = currentElem;
    }
}


int main(void) {
    // Zeiger auf Listenkopf
    Person *headOfList = NULL;

    int operation;
    char namestr[20];
    int age;
    float size;

    //Einspeichern der Daten in die Liste:
    insert(&headOfList, newName("Anton"), 21, 1.82);
    insert(&headOfList, newName("Berta"), 24, 1.74);
    insert(&headOfList, newName("Caesar"), 20, 1.95);
    insert(&headOfList, newName("Dorothea"), 21, 1.72);
    insert(&headOfList, newName("Emil"), 21, 1.76);
    insert(&headOfList, newName("Frida"), 29, 1.69);



    do{
        printf("Operation (1: Eingeben, 2: Loeschen, 3: Liste anzeigen, 4: Ende) ?");
        scanf("%i", &operation);

        if(operation == 1){ //Neues Element hinzufügen
            printf("Name: ");
            scanf("%s", namestr);

            printf("Alter: ");
            scanf("%i", &age);
            printf("Groesse: ");
            scanf("%f", &size);

            insert(&headOfList, newName(namestr), age, size);
        }
        if(operation == 2){ //Letztes Element loeschen
            removeLastElement(&headOfList);
        }
        if(operation == 3){
            printpList(headOfList);
        }

    }while(operation != 4);
    printf("Ade.\n");
}
