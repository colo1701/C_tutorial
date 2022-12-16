#include <stdio.h>

int main() {
    float a = 2.8;
    int b = 1337;
  
    float c = a + b;
  
    /* 
    In this case the sum of an integer and a float is built and stored as a float again.
    So one could expect to get a result of exactly 1339.800000. But actually the value one gets is 1339.00049.
    This happens because a simple float only has a size of 4 Bytes. But there's a nother type of float: double
    double decribes a float with a size of 8 Bytes which comes up with a higher accuracy.
    */
    
    double a8 = 2.8;
    int b8 = 1337;
    
    double c8 = a8 + b8;
    
    printf("The float value: %f\n", c);
    printf("The double value: %f\n", c8);
    return 0; 
}
