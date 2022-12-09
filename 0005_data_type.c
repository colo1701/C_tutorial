#include <stdio.h>

int main() {
    float franzjosef = 2.8;
    float hans = 4.3;
  
    int abc = franzjosef + hans;
  
    /* 
    Adding one (ore more) float values into an integer value will cause the integer variable to 
    simply cutoff the decimal part of the float value AFTER the calculation is made. This means the integer of 
    2.8 plus 4.3 would be 7 while the integer of 2.8 plus the integer of 4.3 would be 6.
    */
    printf("%d\n", abc);
    return 0; 
}
