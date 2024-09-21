// Syntax

//  void recurse() {

//     recurse();

//  }

//  int main() {

//     recurse();

//     return 0;
//  }


// to avoid recursive we can use the if else statements

// void recurse() {
//     if (condition) {

//     }
//     else {
//         recurse();

//     }
    
// }

//  int main(){

//     recurse();

//     return 0;
//  }

 // Recursive function to calculate n numbers

//  #include <stdio.h>

//  int sum (int n);

//  int main() {

//     int a, b;

//     printf("Enter Positive number: ");
//     scanf("%d", &a);

//     b = sum(a);

//     printf("Sum = %d", b);

//     return 0;
//  }
//    int sum (int n){
//     if(n != 0 ){
//         return n + sum(n-1);
//     }
//     else {
//         return n;
//     }
//    }

// # include <stdio.h>

// int sum (int b);

// int main() {

//     int c, e;
//     printf("enter any number: ");
//     scanf("%d",&c);

//      e = sum(c);
//     printf("The result is %d", e);

//     return 0;
// }

// int sum (int b){
//     if (b != 0){
//         return b + sum(b-1);
//     }
//     else{
//         return b;
//     }
// }
// Programming  task, create a program that computes the factorial of a number

# include<stdio.h>

int a(int b);

int main() {

    int c,d;
    printf("Enter any number");
    scanf("%d",&c);

  d = a(c);
  printf("The result is %d", d);
      return 0;
}
int a(int b ){
    if (b >0){
        return b * a(b-1);
    }
    else{
        return 1;
    }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
