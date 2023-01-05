#include <stdio.h>

int main() {
    char a = 'c';

    /*
    %c returns a char output. But every char is also equal to a number, which 
    can be seen asking for the integer output of a char. These values can be 
    seen in the ASCII table. One can also do simple calculations using chars.
    Here it can be seen again that exceeding the range of a calles data type 
    doesn't cause an error but a senseless result so one should always be 
    careful handling with those things.
    */
  
    int b = 1337;
    int c = a + b;
    
    printf("I'm a char: %c\n", a);
    printf("I'm the respective integer: %d\n", a);
    printf("I'm the integer sum of 1337 and the letter c: %d\n", c);
    printf("I'm the char sum of 1337 and the letter c: %c\n", c);
    return 0; 
}
