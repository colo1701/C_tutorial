#include <stdio.h>

/*
So far, we have always written the code that should be executed. This code was 
in the structure 'int main() {}'.
*/

int main() {
    func();
    printf("main\n");

    return 0;
}

/*
The background is that the code that is primarily executed is always in the 
'main' function. Beside the 'main' function there can be other functions, like 
'func'. The commands that are executed in 'func' can be integrated into the 
program in 'main' by calling 'func()'. For simplicity, all functions are first 
defined with 'int' and terminated with 'return 0'.
*/

int func() {
    printf("function\n");

    return 0;
}
