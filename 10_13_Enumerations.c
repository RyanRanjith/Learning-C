// // declaration or syntax of enum

// enum Size{
//     Small,
//     Medium,
//     Large,
//     ExtraLarge
// };
  
// enum Size shoeSize;

// shoeSize = Large;  // we can assign shoeSize of any variables that we mentioned in  enum size

// Example

#include <stdio.h>

enum Size{
Small,   // default value is 0
Medium,
Large,
ExtraLarge,

};

int main() {

    enum Size shoeSize;  //shoeSize is variable

    shoeSize = Small;

    printf("%d",shoeSize);

    return 0;
}