#include <stdio.h>

/*
Parameters are values that are used when calling a function. This allows 
functions to be used for different values when the same operations are always to 
be performed. Strictly speaking, this is also the main purpose of functions.
'wild_computation', for example, has the parameters x and y which must be 
specified when the function is called.
*/

int wild_computation(int x, int y) {
    int res = x + y;
    return res;
}

/*
When calling the function, it is important that the values used are entered in 
the order in which they are defined in the function. In the addition the values 
can be interchanged of course but basically such interchanges lead to wrong 
results which may not be noticed at all and are therefore very dangerous, or to 
errors.
Functions can also be passed variables as parameters. In this case it is of 
course important that the variables (here a and b) were also defined in advance.
*/

int main() {
    int a = 42;
    int b = 1337;
  
    int output = wild_computation(42, 1337);
    int var_output = wild_computation(a, b);
  
    printf("The result of the function with direct values is %d.\n", output);
    printf("The result of the function with variable values is %d.\n", 
           var_output);
    return 0;
}
