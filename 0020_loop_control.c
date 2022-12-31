#include <stdio.h>

int main() {
    int a;
    int b;
  
    /*
    comments
    */
  
    for(a = 0; a < 10; a++) {
        printf("a is %d.\n", a);
        if(a == 5) {
            printf("That's enough!\n");
            break;
        }
    }
    
    return 0;
}
