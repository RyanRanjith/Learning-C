// # include <stdio.h>

// void a(int a, int b){
//   int c = (a *b);
//   printf("%d", c);
// }

// int main() {

//     a(5,6);

//     return 0;
// }

// if we apply above statement of printf in the int main then it will come under local scope

// # include <stdio.h>

// void a(int a, int b){
//    int c = a+b;
  
// }

// int main() {

//     a(5,6);
//      printf("%d", c);
//     return 0;
// }

// The above code cause error.

// The correct solution is

// # include <stdio.h>

// int a(int a, int b){
//     int c = a + b;
//     return c;
// }

// int main(){

//     int e = a(5,6);
//     printf(" The result is: %d", e);


//     return 0;
// }


// Example of global variable

# include <stdio.h>

int c;

void  a(int a, int b){
       c = a + b;
      printf("%d", c);
}

int main(){
    
    a(8,9);
    
    return 0;
}