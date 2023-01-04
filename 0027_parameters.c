#include <stdio.h>

int maximum(int x, int y) {
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}

int minimum(int x, int y) {
    if(x < y) {
        return x;
    }
    else {
        return y;
    }
}

/*
With parameters in functions you can for example calculate things like the 
maximum or minimum. Here, first of all, for two values.
*/

int main() {
    int a = 7;
    int b = 3;
    int c = 4;
    int d = 5;
    
    int min_ab = minimum(a, b);
    int max_cd = maximum(c, d);
    
    printf("The minimum of a and b is %d.\n", min_ab);
    printf("The maximum of c and d is %d.\n", max_cd);
    
    return 0;
}
