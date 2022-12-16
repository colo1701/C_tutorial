#include<stdio.h>

int main() {
    int a = 4;
    int b = 3;

    printf("a is %d.\n", a);
    printf("b is %d.\n", b);
  
    /*
    The first kind of operator is the arithmetic operator. There are some standard operations like
    "+", "-", "*" or "/" but also some more specific ones like the modulo operator "%" or the iterators
    "++" and "--" which raise or reduce the respective variable by 1.
    */
    
    printf("a + b is %d.\n", a+b);
    printf("a % b is %d.\n", a%b);
    
    a++;
    b--;
    
    printf("After 'a++' a is now %d.\n", a);
    printf("After 'b--' a is now %d.\n", b);
    
    /*
    The next operator type are relational operators, which compare conditions.
    Thy can be "==" (equal), "!=" (not equal), ">" (greater than), "<" (smaller than), 
    ">=" (greater than or equal), "<=" (smaller than or equal).
    Printing a boolean, which is the result of such an operation, without further libraries needs
    an integer return ("1" for True and "0" for False).
    */
    
    printf("a < b: %d\n", a<b);
    printf("a > b: %d\n", a>b);
    printf("a == b: %d\n", a==b);
    printf("a != b: %d\n", a!=b);
}
