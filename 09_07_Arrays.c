// // declaring of array

// int age[] = {21,22,23,24,25};

// Array index
// #include <stdio.h>

// int main() {

//     int a[] = {1,2,3,4,5};
//      printf("%d",a[1]);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int a[] = {1,2,3,4,5};
//     printf("%d ", a[0]);
//      printf("%d ", a[1]);
//       printf("%d ", a[2]);
//        printf("%d ", a[3]);
//         printf("%d ", a[4]);

//     return 0;
// }

// Assign value using index number 

// #include <stdio.h>
 
// int main() {
//     int a[5];

//     a[0] = 1;
//     a[1] = 2;
//     a[2] = 3;
//     a[3] = 4;
//     a[4] = 5;
    
//     printf("%d ", a[0]);
//     printf("%d ", a[1]);
//     printf("%d ", a[2]);
//     printf("%d ", a[3]);
//     printf("%d ", a[4]);

//     return 0;
// }

// asking values from user

// #include <stdio.h>

// int main() {

//    int a[5];

//    printf("Enter five values: ");

//    scanf("%d",&a[0]);
//    scanf("%d",&a[1]);
//    scanf("%d",&a[2]);
//    scanf("%d",&a[3]);
//    scanf("%d",&a[4]);

//    printf("%d ",a[0]);
//    printf("%d ",a[1]);
//    printf("%d ",a[2]);
//    printf("%d ",a[3]);
//    printf("%d ",a[4]);
   

//     return 0;
// }

// Changing values in an array

// #include <stdio.h>

// int main() {

//     int a[] = {1,2,3,34,4};
//     a[1] = 3;
//     printf("%d",a[1]); 

//     return 0;
// }

// Using for loop function

// #include <stdio.h>

// int main() {

//     int a[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the Values: ");
//         scanf("%d",&a[i]);
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ",a[i]);
//     }
//     return 0;
// }

// Programming Task

// #include <stdio.h>

// int main() {  
    
//     double b[5];
//     printf("Enter marks: ");
//     for (int i = 0; i < 5; i++)
//     {   
//         scanf("%lf",&b[i]);
        
//     }
//     double c = 0;
//     for ( int i = 0; i < 5; i++)
//     {
//         c = b[i] + c; 
//     }
//     double d = c/5;
//     printf("The marks is %.21f", d);
    

//     return 0;
    
// }

// Practice
# include <stdio.h>

int main(){
    double a[5];
   for (int i = 0; i < 5; i++)
   {
    printf("Enter the numbers");
    scanf("%lf",&a[i]);
   }

   double b;
   for (int i = 0; i < 5; i++)
   {  
    b = a[i] + b;
   }

   double c = b/5;
   printf("The result is %.21lf", c);
    return 0;
}