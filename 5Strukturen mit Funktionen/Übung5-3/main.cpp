#include <stdio.h>


typedef struct ListNode{
    int value;
    struct ListNode *next;
}List1;


struct Stack{
    List1 *list = NULL;

    void push(int val){//Mit push kann die Integerzahl in val auf den Stapel gelegt werden.
        
        List1 *newValue= new List1;
        newValue->value = val;
        newValue->next = NULL;

        if(list == NULL){
            list = newValue;
        }
        else{
            newValue->next = list;
            list = newValue;
        }
    }

    int pop(int *val){
        List1 *currentElem = list;
        
        if(list == NULL){
            return 0;
        }
        else{
            *val = list->value;
            if(list != NULL){
                list = list->next;
                delete currentElem;                
                return 1;
            }
        }
    }
    
    int empty(){
        if(list == NULL){
            return 1;
        }
        else{
            return 0;
        }
    }

};


int main()
{
    Stack stapel1;

    int val;
    int operation, number, state;

    do{
        printf("STACK: (1: PUSH, 2: POP, 3: END): ");
        scanf("%i", &operation);

        if(operation == 1){
            printf("Zahl: ");
            scanf("%i", &number);

            stapel1.push(number);
        }

        if(operation == 2){
            state = stapel1.pop(&val);

            if(state == 1)
                printf("%i\n", val);
            else
                printf("Empty Stack.\n");
        }

    }while(operation != 3);
    printf("Ade.\n");

    
    
    

  return 0;
}
