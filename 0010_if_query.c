#include <stdio.h>

int main() {
    int a = 0;
    int b = 2;
    
    /*
    The if query consists of 3 elements: the call, the condition and the command if the condition is true.
    If the condition is the question whether 2 values are equal, it has to be asked using '==' because a single '='
    is already used to define a value to a variable.
    The simplest query asks for a single condition and will only return the command if the condition is true.
    If the condition is false, the query will not cause any reply.
    This query can be expanded by an 'else if' condition (if there's another condition to check) or an 'else'
    argument (a reply that will show up, if none of the previous conditions are true).
    */
    
    // This shows a simple if query:
    if (a == 0) {
        printf("a is 0.\n");    
    }
    
    // This shows a slightly more complex if query:
    if (b == 0) {
        printf("b is 0.\n");    
    }
    else if (b == 1) {
        printf("b is 1.\n");
    }
    else {
        printf("b is neither 0 nor 1.\n");
    }
    return 0;
}
