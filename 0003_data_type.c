#include <stdio.h>

int main() {
    unsigned int franzjosef = -2000000000;
    int hans;
  
    hans = 1337;
  
    int doerte = franzjosef + hans;
  
    /*
    If %d is called in the print argument, it will handle franzjosef as an integer and return -1,999,998,663.
    This case is trivial.
    Changing the output variable type to %u (which stands for unsigned integer) will give a result of 2,294,968,633.
    This happens because the value of a variable will loop through it's range if it exceeds it's data 
    types value limit and restart from the opposite end of this range.
    In this case the unsigned int value of franzjosef will restart counting down from 4,294,967,295 once it
    falls below 0 which already happens when it's defined. So the initial value as an unsigned integer is
    4,294,967,295 - 1,999,999,999 = 2,294,967,296
    This comes to a total result of 
    2,294,967,296 + 1,337 = 2,294,968,633
    */
    printf("franzjosef + hans = %d\n", doerte);
   
    return 0; 
}
