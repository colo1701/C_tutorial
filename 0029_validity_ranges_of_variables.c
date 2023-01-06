#include <stdio.h>

/*
Global variables can be overwritten locally. This overwriting is called 
overshadowing. The overshadowing does not work if a local variable is defined 
multiple times within a function. This (the two commented out lines) would 
generate an error.
*/

int a = 5;

int some_function(int x, int y) {
    return x + y;
}

int main() {
    printf("Before the new definition, a is %d.\n", a);
    int a = 42;
    int b = 1337;
    printf("After the new definition, a is %d.\n", a);
    // int a = 18;
    // printf("The second value of a is %d.\n", a);
    return 0;
}
