#include <stdio.h>

int main() {

    char symbol;
    printf("enter symbol: ");
    scanf("%c", &symbol);

    double a, b;
    
    printf("Enter number 1: ");
    scanf("%lf", &a);

    printf("Enter number 2: ");
    scanf("%lf", &b);

    double result;

    switch (symbol)
    {
    case '+':
    result = a + b;
        break;


      case '-':
       result = a - b;
        break;


    default:
    printf("invaolid");
        break;
    }

    printf("%lf", result);



    return 0;
}