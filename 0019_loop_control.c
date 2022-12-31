#include <stdio.h>

int main() {
    int a;
    int b;
  
    /*
    Loop control describes two ways to control loops: break & continue.
    The use takes place within an if branch in the loop. If the condition of the query is met, 
    the 'break' command ends the loop completely and the code after the loop is executed.
    The 'continue' command ensures that only the one pass of the loop is skipped. After that, 
    the loop continues to be executed.
    In both cases, the order of the elements used in the loop must be observed.
    In the following loop you can see that the output for the value 'a = 5' still occurs and 
    then the loop is terminated.
    */
  
    for(a = 0; a < 10; a++) {
        printf("a is %d.\n", a);
        if(a == 5) {
            printf("That's enough!\n");
            break;
        }
    }
    
    /*
    In this loop you can see the danger of the wrong sequence. If we are to skip the output for 
    'b = 5', we must bind the output before it takes place. Therefore output and if query are 
    swapped here compared to the upper loop.
    */
  
    for(b = 0; b < 10; b++) {
        if(b == 5) {
            printf("%d will be left out.\n", b);
            continue;
        }
        printf("b is %d.\n", b);
    }
  
    return 0;
}
