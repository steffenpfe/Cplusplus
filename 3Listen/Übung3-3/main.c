#include <stdio.h>
#include <string.h>

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


//Die Funktion bekommt den Name oder Alter oder size und sucht danach. Es gibt den Zeiger auf das struct zurück.
Person *pfind(Person **headOfList, char* name, int age, float size){//Gibt Zeiger auf gefundenes Listenelement zurück
    Person *currentElem = *headOfList;
    Person *previousElem = currentElem;

    if(name != NULL){//Name suchen
        while(currentElem!=NULL && (0!=strcmp(currentElem->name, name))){//strcmp liefert 0 wenn gleich
            previousElem = currentElem;
            currentElem = currentElem->next;
        }
        return currentElem;
    }

    if(name==NULL && age>=0){//Alter suchen
        while(currentElem!=NULL && (currentElem->age != age)){
            previousElem = currentElem;
            currentElem = currentElem->next;
        }
        return currentElem;
    }

    if(name==NULL && age<0 && size>0){//Groesse suchen
        while(currentElem!=NULL && (currentElem->size != size)){
            previousElem = currentElem;
            currentElem = currentElem->next;
        }
        return currentElem;
    }


}


//Die Funktion bekommt den Name oder Alter oder size und löscht gefundenes Element. Gibt 0 oder 1 zurück.
int pdelete(Person **headOfList, char* name, int age, float size){
    Person *currentElem = *headOfList;
    Person *previousElem = currentElem;

    //Sucht und wenn gefunden wird aktuelles Element in currentElem und das davor in previousElem gespeichert
    if(name != NULL){//Name suchen
        while(currentElem!=NULL && (0!=strcmp(currentElem->name, name))){//strcmp liefert 0 wenn gleich
            previousElem = currentElem;
            currentElem = currentElem->next;
        }
    }

    if(name==NULL && age>=0){//Alter suchen
        while(currentElem!=NULL && (currentElem->age != age)){
            previousElem = currentElem;
            currentElem = currentElem->next;
        }
    }

    if(name==NULL && age<0 && size>0){//Groesse suchen
        while(currentElem!=NULL && (currentElem->size != size)){
            previousElem = currentElem;
            currentElem = currentElem->next;
        }
    }

    if(currentElem != NULL){
        if(previousElem == currentElem){//wenn bei Listenkopf stehen geblieben
            *headOfList = currentElem->next;
            free(currentElem);
        }
        else{//Wenn am Listenende oder zwischendrin!
            previousElem->next = currentElem->next;
            free(currentElem);
        }
    return 1; //Wenn loeschen erfolgreich!
    }
    else
        return 0;
}



int main(void) {
    // Zeiger auf Listenkopf
    Person *headOfList = NULL;

    int operation;
    char namestr[20];
    int age;
    float size;
    int search;
    int i,k;
    Person *foundElem;

    //Einspeichern der Daten in die Liste:
    insert(&headOfList, newName("Anton"), 21, 1.82);
    insert(&headOfList, newName("Berta"), 24, 1.74);
    insert(&headOfList, newName("Caesar"), 20, 1.95);
    insert(&headOfList, newName("Dorothea"), 21, 1.72);
    insert(&headOfList, newName("Emil"), 21, 1.76);
    insert(&headOfList, newName("Frida"), 29, 1.69);



    do{
        printf("Operation (1: Eingeben, 2: Loeschen, 3: anzeigen, 4: suchen 5: Ende) ?");
        scanf("%i", &operation);
        foundElem = NULL;

        if(operation == 1){ //NEUES ELEMENT HINZUFÜGEN
            printf("Name: ");
            scanf("%s", namestr);

            printf("Alter: ");
            scanf("%i", &age);
            printf("Groesse: ");
            scanf("%f", &size);

            insert(&headOfList, newName(namestr), age, size);
        }
        if(operation == 2){ //HIER KANN DAS LETZTE ELEMENT ODER GEZIELT GELOESCHT WERDEN!!!!
            printf("(Gezielt Loeschen: 1, Letztes Element loeschen: 2): ");
            scanf("%i", &i);
            if(i==2)
                removeLastElement(&headOfList);

            if(i==1){
            printf("Was suchen und löschen?(1: Name, 2: Alter, 3: Groesse): ");
            scanf("%i", &search);

            if(search==1){
                printf("Name: ");
                scanf("%s", namestr);
                k = pdelete(&headOfList, newName(namestr), 0, 0);
            }
            if(search==2){
                printf("Alter: ");
                scanf("%i", &age);
                 k = pdelete(&headOfList, NULL, age, 0);
            }
            if(search==3){
                printf("Groesse: ");
                scanf("%f", &size);
                k = pdelete(&headOfList, NULL, -1, size);
            }

            if(k==1)
                printf("Erfolgreich geloescht.\n");
            else
                printf("Fehler. Suche konnte nicht geloescht werden\n");
        }


        }
        if(operation == 3){ //LISTE AUSGEBEN
            printpList(headOfList);
        }

        if(operation == 4){ //Hier kann gezielt gesucht werden--> man bekommt Zeiger auf struct und kann somit ausgeben
            printf("Suche nach? (1: Name, 2: Alter, 3: Groesse): ");
            scanf("%i", &search);

            if(search==1){
                printf("Name: ");
                scanf("%s", namestr);
                foundElem = pfind(&headOfList, newName(namestr), 0, 0);
            }
            if(search==2){
                printf("Alter: ");
                scanf("%i", &age);
                foundElem = pfind(&headOfList, NULL, age, 0);
            }
            if(search==3){
                printf("Groesse: ");
                scanf("%f", &size);
                foundElem = pfind(&headOfList, NULL, -1, size);
            }

            if(foundElem != NULL)
                printf("Name: %s, Alter: %i, Groesse, %.2f\n", foundElem->name, foundElem->age, foundElem->size);
            else
                printf("Nicht gefunden.\n");


        }


    }while(operation != 5);
    printf("Ade.\n");
}
