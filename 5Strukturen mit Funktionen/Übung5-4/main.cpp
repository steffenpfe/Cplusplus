#include <stdio.h>
#include <string.h>

//Warteschlange: Neue Elemente immer in Listenkopf.
//Anfang: InPointer
//Ende: OutPointer
//Wie Array mit links OutPointer und ganz rechts InPointer. Write läuft von links nach rechts und springt wenn er ganz
//rechts ist wieder nach links zum OutPointer...read macht das gleiche!


typedef struct _List{
    char letter;
    struct _List *next;
}List;


struct Ringbuffer{
    List *InPointer = NULL; //Zeiger auf Listenanfang
    List *OutPointer = NULL; //Zeiger auf Listenende
    List *write;
    List *read;

    void init(int length){//Erstellt dyn. Puffer der Länge length
       int i;

       for(i=0; i<length; i++){
           List *newChar = new List;

           if(InPointer == NULL){//wenn noch kein Element in Liste
                InPointer = newChar;//Wandert nach rechts
                OutPointer = newChar;//Immer am linken Ende
           }
           else{ //Wenn schon Elemente in Liste.
                InPointer->next = newChar;
                InPointer = newChar;
           }
       }
       write = OutPointer;//damit man Anfang der Liste weiß
       read = OutPointer;
    }

    void push(char val){//WRITE: Schreibt zeichen an Position Ende (von links nach rechts)->Wenn Pufferende, dann wieder zu Ende (nach links)
        if(write != InPointer){//Solange nicht ganz rechts
            write->letter = val;
            write = write->next; //Zum nächsten Element springen
        }
        else{
            write->letter = val;
            write = OutPointer; //wenn am Anfang, dann wieder zurück zu Ende-> OUtPointer (nach links)
        }
    }

    char pop(){//READ: Lesen und zurückgeben eines Zeichens ->read läuft Liste durch und gibt aus, bis zu InPointer
        char c;
        if(read != InPointer){
            c = read->letter;
            read = read->next;
        }
        else{
            c = read->letter;
            read = OutPointer;
        }
        return c;
    }

};




int main(){
    Ringbuffer queue;
    char str[50];
    int buffersize, k;

    printf("Geben Sie ein String für den Ringbuffer ein:");
    gets(str);

    printf("Der String hat %i Zeichen. Wie groß soll der Buffer sein?: ", strlen(str));
    scanf("%i", &buffersize);

    queue.init(buffersize);


    for(k=0; k<strlen(str); k++){//Hier wird Zeichen für Zeichen übergeben
        queue.push(str[k]);
    }


    printf("Inhalt Ringbuffer:\n");
    for(k=0; k<buffersize; k++){ //Bis buffersize, da er sonst nochmal durch die Schlange durch läuft!!
        printf("%c", queue.pop());
    }

    printf("\n");

  return 0;
}
