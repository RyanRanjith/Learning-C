// Struct syntax

// int main() {
//     struct Person person1;
//     return 0;
// }

// Initializing values

// #include <stdio.h>

// struct Name   // Name is variable 
// {
//     int age;    // initializing values
//     double salary;
    
// };

// int main() {

// struct Name person1;   // Calling the function 
// struct Name person2;

// person1.age = 25;
// person1.salary = 2500.00;

// printf("Age of person is: %d\n",person1.age);
// printf("Salary of person is: %.2lf",person1.salary);

// person2.age = 31;
// person2.salary = 8000.00;

// printf("\nAge of Person 2 is: %d ",person2.age);
// printf("\nSalary of Person 2 is: %.2lf ", person2.salary);

// return 0;
// }

// we can also do it in same line without creating each structure using {}
// # include <stdio.h>

// struct Person {
//     int age;
//     double salary;
// };

// int main() {
//   struct Person p1 = {.age=21,.salary=3000.00};
//   struct Person p2 = {.age=22, .salary=4000.00};

//   printf("Age Of P1 is %d\n",p1.age);
//   printf("salary of p1 is: %.2lf\n", p1.salary);

//   printf("Age of P2 is %d\n", p2.age);
//   printf("Salary of P2 is %.2lf", p2.salary);
    

//     return 0;
// }

// We can also declare struct variables in main function code
# include <stdio.h>

struct Person {
    int age;
    double salary;
} p1, p2;

int main() {
   p1.age = 22;
   p1.salary = 3000.00;
   p2.age = 30;
   p2.salary = 4000.00;

  printf("Age Of P1 is %d\n",p1.age);
  printf("salary of p1 is: %.2lf\n", p1.salary);

  printf("Age of P2 is %d\n", p2.age);
  printf("Salary of P2 is %.2lf", p2.salary);
    

    return 0;
}