#include <stdio.h>

int main() {
    /*
    const defines a local constant variable which frmo there is read-only.
    It's a convention that constant variables are written in Caps letters.
    Trying an operation like 'PI = radius + 2' would cause a read-only error.
    Despite this fact, constant variables can be used like normal variables.
    */
  
    const double PI = 3.14159;
    float radius = 3.5;
 
    printf("This is Pi: %f\n", PI);
    printf("This is the area of a circle with radius %f: %f\n", 
           radius, 
           radius*radius*PI);
      
    return 0; 
}
