// # include <stdio.h>

// int main() {

//     for (int i = 1; i <= 5; i++)
//     {
//         if ( i == 4 ){
//             break;
//         }
//         printf("%d\n",i);    
//     }
//     return 0;
// }

// Break Statement with while loop
// # include <stdio.h>

// int main() {

//     while(1) {
//         int a;
//         printf("Enter the number: ");
//         scanf("%d", &a);

//         if(a < 0){
//             break;
//         }
//         printf("%d\n", a);
//     }

//     return 0;
// }

// Continue Statement

// #include <stdio.h>

// int main() {
//     for (int i = 1; i <= 5; i++) {

//      if(i == 3){
//         continue;
//      }
//      printf("%d\n",i);
//     }
//     return 0;
// }

// Example using break and continue statements create a program that prints only even number and skips odd number terminate if it encounters negative number

// #include <stdio.h>

// int main() {
    
//     while (1)
//     {
//         int a;
//        printf("Enter any number: ");
//        scanf("%d", &a);

//        if (a <= 0)
//        {
//         break;
//        }
//        if((a % 2) != 0){
//          continue;
//        }
//        printf("%d\n",a);
//     }
    
    
//     return 0;
// }

// Program that prints value if number is negative odd number and end if it is positive value, skip if it is negatuve even.
# include <stdio.h>

int main() {

    while(1){
       int a;
       printf("Enter any number: ");
       scanf("%d", &a);

       if(a > 0){
        printf("Positive value\n");
        break;
       }

       if((a % -2) == 0) {
       printf("Negative even\n");
       continue;
       }

       printf("%d\n",a);
    }

    return 0;
}