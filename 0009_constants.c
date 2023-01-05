#include <stdio.h>

/*
#define sets up a global constant variable or a so called pre-processor 
directive. This means they are set up before anything else happens. Variables 
set up like this can not be re-defined or changed within methods.
*/
   
#define PI 3.14159

int main() {
    float radius = 3.5;
    
    printf("This is Pi: %f\n", PI);
    printf("This is the area of a circle with radius %f: %f\n", 
           radius, 
           radius*radius*PI);
      
    return 0; 
}
