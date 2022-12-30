#include <stdio.h>

int main() {
    int a = 0;
  
    do {
        printf("a is %d.\n", a);
        a++;
    } while(a < 10);
  
    /*
    The do while loop works at first sight like the while loop.
    The difference is that if the variable defined in advance does not satisfy the condition 
    of the do while loop, the commands are still executed once. The condition is therefore 
    only checked after the first run.
    */

    int b = 120;
    
    do {
        printf("b is %d.\n", b);
        b++;
    } while(b < 10);

    return 0;
}
