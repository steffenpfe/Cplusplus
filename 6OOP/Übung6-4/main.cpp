#include <iostream>
#include <stack.h>


int main(void)
{
    Stack stapel(2);

    int operation, number;
    bool cond;
    printf("1: PUSH, 2: POP, 3: QUIT\n");
    do{
        printf("Operation: ");
        scanf("%i", &operation);

        if(operation==1){
            printf("Number: ");
            scanf("%i", &number);

            cond = stapel.push(number);
            if(cond==false)
                printf("%i now on top of the stack\n", number);
            else
                printf("stack full\n");

        }

        if(operation==2){
            cond = stapel.pop(number);
            if(cond==false)
                printf("pop delivered %i\n", number);
            else
                printf("stack empty\n");
        }


    }while(operation != 3);
    printf("Ade.\n");






    return 0;
}

