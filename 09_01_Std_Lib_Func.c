// using math.h function

// #include <stdio.h>
// #include <math.h>

// int main() {

//     int n = 25;
//     printf("The Square root is %lf", sqrt(n));

//     return 0;
// }

// Finding cube root

// #include <stdio.h>
// #include <math.h>

// int main() {

//     int n = 27;
//     printf("The Cube root is %lf", cbrt(n));

//     return 0;
// }

// Finding Power root

// #include <stdio.h>
// #include <math.h>

// int main() {

//     int a = 10;
//     int b = 2;

//     double r = pow(a,b);
//     printf("The Power result is %lf",r);

//     return 0;
// }

// Using character function

// #include <stdio.h>
// #include <ctype.h>

// int main() {

//     char a = 'r';
//     char b = toupper(a);
//     printf("%c",b);
    
//     char l = tolower(b);
//     printf("\n%c", l);

//     return 0;
// }

// Programming task 
#include <stdio.h>
#include<math.h>

int main(){
    
    int a;
    printf("Enter numbers: ");
    scanf("%d",&a);

    int c = sqrt(a);

    double d = pow(a,c);

    printf("%lf",d); 



    return 0;
}