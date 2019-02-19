#include <stdio.h>

typedef struct _Point {
    float x;
    float y;
    struct _Point *next;
} Point;

void printList(Point *headOfList) {
    Point *currentElem = headOfList;
    while (currentElem != NULL) {
        printf("x: %.2f, y: %.2f\n",currentElem->x, currentElem->y);
        currentElem = currentElem->next;
    }
    printf("EOL\n");
}

void removeLastElement (Point **headOfList) {
    Point *currentElem = *headOfList;
    Point *previousElem = currentElem;

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

void append(Point **headOfList, float x, float y) {
    Point *currentElem = *headOfList;

    // Listenelement allozieren
    Point *newPoint = (Point *) malloc (sizeof(Point));
    newPoint->x = x; // Listenelement Daten zuweisen
    newPoint->y = y;
    newPoint->next = NULL; // Nullzeiger: Markiert Ende der Liste

    // Falls Liste leer: Listenkopf erzeugen
    if (currentElem == NULL) {
    *headOfList = newPoint;
    }
    else { // Anderenfalls neues Element anfügen
        while (currentElem->next != NULL) {
            currentElem = currentElem->next;
        }

    currentElem->next = newPoint;
    }
}




int main(void) {
    // Zeiger auf Listenkopf
    Point *headOfList = NULL;

    int operation;
    float x, y;
    do{
        printf("Operation (1: Eingeben, 2: Loeschen, 3: Ende) ?");
        scanf("%i", &operation);

        if(operation == 1){ //Neues Element hinzufügen
            printf("x-Koordinate: ");
            scanf("%f", &x);
            printf("y-Koordinate: ");
            scanf("%f", &y);
            append(&headOfList, x, y);
        }
        if(operation == 2){ //Letztes Element loeschen
            removeLastElement(&headOfList);
        }

        printf("Liste: \n");
        printList(headOfList);
    }while(operation != 3);
    printf("Ade.");
}
