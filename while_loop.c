 /// Syntax
 
//  #include<stdio.h>

//  int main() {

//     while (1<6) {
//         printf("while");
//     }

//     return 0;
//  }


 /// 2nd part -- to stop the while loop

//  #include <stdio.h>

//  int main() {

//     int a = 1;
//     while (a<7){
//         printf("continue loopinh");
//         printf("Count = %d\n",a); 
//         a = a + 3;

//     }

//     return 0;
//  }

// Third part multiplication

// #include <stdio.h>

// int main() {

//     int a;
//     printf("enter number: ");
//     scanf("%d", &a);

//     int b = 1;

//     while (b<=10)
//     {
//         int result = b * a;
//         printf("%d * %d = %d\n",a, b, result);
//         b = b + 1;
//     }
    

//     return 0;
// }

// do while

// #include <stdio.h>

// int main() {

//     int a;
//     printf("enter number");
//     scanf("%d", &a);

//     int b = 1;

//     do{
//         int product = a * b;
//         printf("%d\n", product);
//         b = b + 1;
//     }
//     while (b <= 10);
    
//     return 0;
// }

// programming quiz
#include <stdio.h>

 int main() {

    int a;
    printf("enter number");
    scanf("%d", &a);

     int b = 10;

     do{
        int product = a * b;
        printf("%d * %d = %d\n", a, b, product);
        b = b - 1;
     }
     while (b>=1);

 

  return  0;
 }