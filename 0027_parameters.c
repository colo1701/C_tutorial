#include <stdio.h>

int wild_computation(int x, int y) {
    int res = x + y;
    return res;
}

/*

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
