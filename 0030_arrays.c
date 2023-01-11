#include <stdio.h>

/*
An array is a possibility to collect several values in one variable.
The array is initiated like other variables by calling the data type and then 
the variable name with the difference that with the array the size of the array, 
i.e. the number of storable values, is added in square brackets.
*/

int main() {
    int a[10];
    int i;
    
    printf("This is what the array looks like at the very beginning:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");
   
    /*
    At the beginning the array is empty and has to be filled. This can be done 
    manually but also with the help of loops, as you can see in the following. 
    */
    
    a[0] = 42;
    a[1] = 1337;
    
    for(i = 2; i < 8; i++) {
        a[i] = i * i;
    }
    
    a[8] = 666;
    a[9] = a[8] + 1;
    
    printf("After filling it with values the array looks like this:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}
