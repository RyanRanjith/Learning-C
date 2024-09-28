// #include <stdio.h>

// int main() {

//     int a[5] = {0,1,2,3,4};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d = %p\n", a[i], &a[i]);
//     }

//    // Printing only address of array
//     printf("Array Address: %p\n",a);

//     // We can use Pointers to print address of other numbers
//     printf("Array Address of 0: %p\n", a);
//     printf("Array address of 1: %p\n", a+1);
//     printf("Array address of 2: %p\n", a+2);
    
//     return 0;
// }

// // Alternate way instead of using &a[i] we can use a + i

// #include <stdio.h>

// int main() {

//     int a[3] = {0,1,2};

//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d = %p\n", a[i], a + i);
//     }
    

//     return 0;
// }

// // Accessing numbers using pointers
// #include <stdio.h>

// int main() {
    
//     int a[3] = {0,1,2};
//     for (int i = 0; i < 3; i++)
//     {
//         printf("%d = %p\n", *(a + i), a + i);
//     }
    

//     return 0;
// }
 
// Change array elements using pointers

// #include <stdio.h>

// int main() {

//     int a[5] = {0,1,2,3,4};

//     *a = 1;
//     *(a+2) = 3;

//     printf("The first number is : %d\n",a[0]);
//     printf("The third number is %d", a[2]);


//     return 0;
// }

// Programming Task

#include <stdio.h>

int main() {
    int arr[] = {34,12,21,54,48};
    int largest = *arr;
    for (int i = 0; i < 5; i++)
    {
        if (largest < *(arr+i))
        {
            largest = *(arr+i);
        }   
    }
     printf(" This is largest number: %d",largest);
    return 0;
}