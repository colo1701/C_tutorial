#include <stdio.h>

int main() {
    // Defining a float variable (size is 4 Bytes as well as the integer's size)
    float a = 2.3;
    float b = 4.5;
  
    float c = a + b;
  
    /* 
    %f calls a float value as output.
    If one changes the output back to %d (integer), it can happen, depending on 
    the compiler used, that one either gets an error or a meaningless integer 
    value is output (or even both). So it is important to use data types 
    consistently in any case, because unlike more modern programming languages, 
    C often simply executes code instead of rejecting less meaningful statements
    with easy-to-understand error messages.
    */
    
    printf("%f\n", c);
    return 0; 
}
