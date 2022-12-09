#include <stdio.h>

int main() {
    float franzjosef = 2.8;
    int hans = 1337;
  
    float abc = franzjosef + hans;
  
    /* 
    In this case the sum of an integer and a float is built and stored as a float again.
    So one could expect to get a result of exactly 1339.800000. But actually the value one gets is 1339.00049
    */
    printf("%f\n", abc);
    return 0; 
}
