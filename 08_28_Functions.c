// # include <stdio.h>

// void greet(){
//     printf("Good Night\n");
// }

// int main() {
//         greet();
//         printf("Sweet Dreams Take care ! ");
//     return 0;
// }

// function with parameters

// # include <stdio.h>

// void calculatesquare(int number) {
//     int square = number * number;
//     printf("Square of %d is %d\n", number, square);
// }

// int main() {
   
//    calculatesquare(3);
  
//     return 0;
// }

// Doing addition

// # include <stdio.h>

// void addnum(int a, int b){
//     int sum = a + b;
//     printf("Sum of %d and %d is %d", a, b, sum);
// }

//  int main() {

//     addnum(5,5); // function arguements

//     return 0;
//  }

 // Return Types
// # include <stdio.h>

// int c(int a, int b){
//     int d = a - b;
//     return d;
// }

// int main() {
//     int e = c(99,1);
//     printf("Result is %d", e);
        
//     return 0;
// }

// Function Prototypes
 
//  Using square root

// # include <stdio.h>
// # include <math.h>

// int main() {
     
//     float a;
//     printf("Enter the square root value: ");
//     scanf("%f",&a);

//     float b = sqrt(a);
//     printf("The value is:  %f", b);

//     return 0;
// }

// Task : It should be taking two numbers as input, performs the multiplcation of two numbers and returns the result

# include <stdio.h>

int m(int a, int b){
    int c = a * b;
    return c;


}

int main () {

    int r = m(2,5);
    printf("the result is:  %d", r);

    return 0;
}