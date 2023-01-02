#include <stdio.h>

int wild_computation () {
    int a = 5 + 5;
}

/*
This time there is no return called in 'wild_compuation'. This causes that no 
result will be put out in 'main'. Instead, the default value (only for int) is 
simply 0.
*/

int main() {
    int b = wild_computation();
    printf("The result of the computation is %d.\n", b);
    return 0;
}

/*
If one doesn't want to return anything, one can simply call a void function as 
follows in the function 'return_nothing'. Much more a return in a void function 
would generate an error. Also note that you cannot assign the 'result' of a void 
function to a variable, since such a thing is not created by a void function.
*/

void return_nothing() {
    int any_number = 5 * (3 + 2);
}
