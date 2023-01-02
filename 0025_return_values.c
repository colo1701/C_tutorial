#include <stdio.h>

int wild_computation () {
    int a = 5 + 5;
    return a;
    printf("Some text below the return command\n");
}

/*
Here you can see that after the calculation in 'wild_computation' a text should 
be output. But this does not happen, because a return ends the function.
*/

int main() {
    int b = wild_computation();
    printf("The result of the computation is %d.\n", b);
    return 0;
}

/*
However, this circumstance can be exploited, for example, by terminating 
functions as soon as they have completed a task and letting them continue to run 
if not. An example looks as follows.
*/

int exploit_returns() {
    int a = 6 + 5;
    if(a == 10) {
        return a;
    }
    else {
        printf("Some text below the return command\n");
        return 0;
    }
}
