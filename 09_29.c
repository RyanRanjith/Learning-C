// # include <stdio.h>

// void findvalue (int* num) {

//     *num = 39;
// }

// int main() {

//     int a = 21;

//     findvalue(&a);
//     printf("%d",a);

//     return 0;
// }

// Finding Square of the number

// # include <stdio.h>

// void findSquare (int* number) {

//     int square = *number * *number;
//     *number = square;
// }

// int main() {

//     int number = 4;

//     findSquare(&number);

//     printf("Square is %d", number); 

// return 0;
// }

//  Returing pointer variable   

// #include <stdio.h>

// int* findSquare (int* number) {   // findSquare is a function
//     int square = *number * *number;  // square multiplies numbers
//     *number = square;

//     return number;

// }

// int main() {

//     int number = 4;
//     int* result = findSquare(&number);  // using findSquare function calculating number in address of number.

//     printf("Result is %d", *result);

//     return 0;
// }

// Adding two numbers using pointer and function

// #include <stdio.h>

// int* addNumbers (int* num1, int* num2, int* sum) {

//     *sum = *num1 + *num2;

//     return sum;
// }


// int main() {

//     int number1 = 100;
//     int number2 = 200;
//     int sum;

//    int* result =  addNumbers(&number1,&number2, &sum);

//    printf("Result is %d", *result);



//     return 0;
// }

// Programming Task

#include <stdio.h>

int* fnc (int* a, int* b, int* sum){
    *sum = *a * *b;
    return sum;
}

int main(){

    int a = 13;
    int b = 9;
    int sum;

    int* rslt = fnc(&a,&b,&sum);
    printf("Result is %d",*rslt);

    return 0;
}