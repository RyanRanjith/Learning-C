 // Initialization of multi - dimensional array

// int arr[2][3] = {{1,2,3},{3,4,5}};

// Accessing elements from the array
// #include <stdio.h>

// int main() {

// int arr[2][3] = {{1,2,3},{3,4,5}};

// printf("%d\n",arr[0][0]);
// printf("%d",arr[1][2]);

   
//     return 0;
// }


// Changing elements index

// #include <stdio.h>

// int main() {

// int arr[2][3] = {{1,2,3},{3,4,5}};

// arr[0][0] = 2;
// arr[1][1] = 4;

// printf("%d\n",arr[0][0]);
// printf("%d",arr[1][1]);

   
//     return 0;
// }

// Multi-dimensional array using loop


# include <stdio.h>

int main() {

    int a[2][3] = {{1,2,3},{4,5,6}};

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
        
        /* code */
    }
    

    return 0;
}



