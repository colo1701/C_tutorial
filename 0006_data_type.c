#include <stdio.h>

int main() {
    float franzjosef = 2.8;
    int hans = 1337;
  
    float abc = franzjosef + hans;
  
    /* 
    In this case the sum of an integer and a float is built and stored as a float again.
    So one could expect to get a result of exactly 1339.800000. But actually the value one gets is 1339.00049.
    This happens because a simple float only has a size of 4 Bytes. But there's a nother type of float: double
    double decribes a float with a size of 8 Bytes which comes up with a higher accuracy.
    */
    
    double franzjosef8 = 2.8;
    int hans8 = 1337;
    
    double abc8 = franzjosef8 + hans8;
    
    printf("The float value: %f\n", abc);
    printf("The double value: %f\n", abc8);
    return 0; 
}
