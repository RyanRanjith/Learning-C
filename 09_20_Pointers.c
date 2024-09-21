// To print the memory address

// #include <stdio.h>

// int main() {

//     int a = 23;
//     printf("%p",&a);

//     return 0;
// }

// Using pointer function

// #include <stdio.h>

// int main() {
//     int a = 30;
//     printf("%p",&a);

//     int* ptr = &a;
//     printf("\n%p", ptr);   

//     return 0;
// }

// Accessing value of a variable using pointer

// #include <stdio.h>

// int main() {

//     int a = 25;
    
//     int* ptr = &a;

//     printf("Address is: %p",ptr);
//     printf("\nValue is: %d", *ptr);



//     return 0;
// }

// Changing value using pointer variable

// #include <stdio.h>

// int main() {

//     int a = 30; 
//     int* ptr = &a;

//     *ptr = 40;
//     printf("Updated Value is %d",a);

//     return 0;
// }

// ROugh

// #include <stdio.h>

// int main() {

//     int a = 39;
//     int* ptr = &a;

//     printf("%p",ptr);

//     return 0;
// }

// Programming Task

#include <stdio.h>

int main() {
   double a;
   double* ptr = &a;

   printf("Enter Salary: ");
   scanf("%lf",&a);

   printf("%lf", *ptr);
   double c = 2 * (*ptr);

   printf("\nThe new salary is %lf",c);

    return 0;
}
