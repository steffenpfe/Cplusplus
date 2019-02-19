#include <stdio.h>
#include <string.h>

//Minirechner durch sscanf
int main(void)
{
    char string[100];
    int operand1, operand2;
    char operation;
    printf("Operand1 Operation Operand2\n");

    do{
    printf("Ausdruck: ");
    gets(string);

    sscanf(string,"%i %c %i", &operand1, &operation, &operand2);

    if(strcmp(string, "quit")){
    printf("%s = ", string);
    switch(operation){
        case '+': printf("%i", (operand1 + operand2));
                  break;

        case '-': printf("%i", (operand1 - operand2));
                  break;

        case '*': printf("%i", (operand1 * operand2));
                  break;

        case '/': printf("%i", (operand1 / operand2));
                  break;
    }
    }
    printf("\n\n");
    }while(strcmp(string, "quit"));

    printf("Ade\n");

    return 0;
}

