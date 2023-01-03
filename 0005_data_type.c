#include <stdio.h>

int main() {
    float a = 2.8;
    float b = 4.3;
  
    int c = a + b;
  
    /* 
    Adding one (ore more) float values into an integer value will cause the 
    integer variable to simply cutoff the decimal part of the float value AFTER 
    the calculation is made. This means the integer of 2.8 plus 4.3 would be 7 
    while the integer of 2.8 + the integer of 4.3 would be 6.
    */
    
    printf("%d\n", c);
    return 0; 
}
