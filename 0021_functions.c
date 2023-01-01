#include <stdio.h>

int main() {
    func1();
    printf("main\n");

    return 0;
}

/*
Functions can be nested in a complex way. In the following, for example, a function 
'func2' is called within 'func1'. In the same way 'func1' and 'printf' are called in 
'main', because 'printf' is also a function in c, but it does not have to be defined 
explicitly anymore.
*/

int func1() {
    printf("function 1\n");
    func2();
    
    return 0;
}

int func2() {
    printf("function 2\n");
    
    return 0;
}
