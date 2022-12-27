#include <stdio.h>

int main() {
    int a = 4;
    int b = -3;
    
    /*
    This while loop executes it's commands as long as the condition 'a > 0' is True. If we would not reduce
    'a' within the loop, it would run forever.
    */
  
    while(a > 0) {
        printf("a is %d.\n", a);
        a--;
    }
  
    return 0; 
}
