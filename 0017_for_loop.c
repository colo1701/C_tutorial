#include <stdio.h>

int main() {
    /*
    while loops are good for counting but with for loops it is much easier.
    At the beginning of the loop the conditions for the loop variable are defined. 
    In this case, a should be 0 at the beginning, run the loop until a reaches the 
    value 10 and increase by 1 with each pass.
    The increase of the value of a always happens after the loop has run.
    With the conditions 'start at 0', 'increment by 1' and 'stop at <n' you can cause 
    exactly n runs of the loop, which is usually one of the two essential purposes 
    (1. as a pure counting loop, 2. to link a certain content condition with a break).
    Since the start value is defined in the loop, it is sufficient to determine only 
    the data type of the variable in advance with 'int a'.
    */
  
    int a;
    
    for(a = 0; a < 10; a++) {
        printf("a is %d.\n", a);
    }
  
    return 0;
}
