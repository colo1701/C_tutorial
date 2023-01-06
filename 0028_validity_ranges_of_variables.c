#include <stdio.h>

int xyz = 5;

/*
Variables can be basically distinguished into local and global variables. The 
variables a & b of this program are defined within the 'main' function and are 
also only valid from the point of their definition to the end of the function. 
Outside of 'main', for example, a can be used again, but must be redefined for 
this. This makes a & b local variables. 
The variable xyz, which is at the top of the script, is a global variable. This 
allows xyz to be used in 'some_function' as well as in 'main or some other place 
in the program, as seen in the 'main' function.
*/

int some_function(int x, int y) {
    int res = x + y;
    return res;
}

int main() {
    int a = 42;
    int b = 1337;
    printf("We use xyz in a function and get %d.\n", some_function(xyz, 5));
    return 0;
}
