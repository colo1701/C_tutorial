#include <stdio.h>

int main() {
    func1();
    func1();
    printf("main\n");

    return 0;
}

/*
Functions can also be called several times like in 'func1'.
If we run 'main' it first calls 'func1' which prints it's own text and afterwards calls 
'func2' three times, which prints the text of 'func2'.
This happens a second time before 'main' prints the last string.
*/

int func1() {
    printf("function 1\n");
    func2();
    func2();
    func2();
  
    return 0;
}

int func2() {
    printf("function 2\n");
    
    return 0;
}
