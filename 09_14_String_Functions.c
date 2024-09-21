// To find length of String using strlen() function
// # include <stdio.h>
// #include <string.h>

// int main() {
//     char a[] = "I am learning C";

//     printf("%s",a);

//     printf("\nThe length of words are: %zu", strlen(a));

//     return 0;
// }
// 09- 16 -2024

// Using strcopy()

// # include <stdio.h>
// #include <string.h>

// int main() {
//     char a[] = "Ranjith";

//     char b[strlen(a)];

//     strcpy(b,a);

//     printf("%s",b);

//     return 0;
// }

// Using STRCAT

// #include <stdio.h>
// #include <string.h>

// int main() {

//     char a[50] = "Ranjith loves ";
//     char  b[] = "Varshu Papa";

//     strcat(a,b);

//    printf("%s",a);

//     return 0;
// }

// Using strcmp() function

// #include <stdio.h>
// #include <string.h>

// int main() {

//     char a[] = "abc";
//     char b[] = "abcd";

//     int c = strcmp(a,b);
//     printf("%d",c);

//     return 0;
// }


// Programming Task

#include <stdio.h>
#include <string.h>

int main() {
    
    char a[40];
    char b[40];
    printf("Enter string\n");
    fgets(a, sizeof(a),stdin);
    printf("Enter second string\n");
    fgets(b, sizeof(b),stdin);

    long c = strlen(a);
    long d = strlen(b);

    if (c > d)
    {
        printf("%s",a);
    }
    else{
       printf("%s",b);
    }
    
    return 0;
}