#include <stdio.h>

int main() {

    char symbol;
    printf("Enter the symbol");
    scanf("%c", &symbol);

    double num1, num2;

    printf("ENter num1");
    scanf("%lf", &num1);

     printf("ENter num2");
    scanf("%lf", &num2);

    double result;

    switch (symbol)
    {
    case '+':
    result = num1 + num2;
        break;

         case '-':
    result = num1 - num2;
        break;
    
    default:
    printf("invalid");
        
    }

    printf("%lf", result);



    return 0;
}