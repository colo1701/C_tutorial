#include <stdio.h>

int main() {
    int a = 4;
    int b = -3;

    /*
    It is also possible to perform other indented operations within the loop.
    In this script the first loop stops after the first process of the outer 
    loop as 'b' is not set back to -3. The second loop shows the difference 
    where the iteration generates an output for all upcoming values of 'a.
    */
  
    while(a <= 20) {
        while(b < 0) {
            printf("a is %d and b is %d.\n", a, b);
            b++;
        }
        a++;
    }
  
    a = 4;
    while(a <= 20) {
        b = -3;
        while(b < 0) {
            printf("a is %d and b is %d.\n", a, b);
            b++;
        }
        a++;
    }
  
    return 0; 
}
