#include <stdio.h>

int main() {
    int a = 4;
    int b = -3;

    /*
    The conditions and commands within the while loop can be arbitrarily 
    complex. But it is still important to make sure, that there is a valid abort
    condition if the loop should not run forever. E.g. the second loop in this 
    script would do so as only one condition has to be True and 'b' does never 
    change. To not make the script crash I commented this loop out. 
    */
  
    while(a <= 20 && b == -3) {
        printf("a is %d.\n", a);
        a++;
    }
  
    /*
    while(a <= 20 || b == -3) {
        printf("a is %d.\n", a);
        a++;
    }
    */
  
    return 0; 
}
