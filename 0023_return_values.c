#include <stdio.h>

/*
You must have noticed by now that we have always started functions with 'int' 
and ended them with 'return 0'. Let's take a closer look at that now.
*/

int wild_computation () {
    int a = 5 + 5;
    return a;
}

/*
The function 'wild_computation' contains a very difficult calculation, whose 
result is stored in the variable a. At the end of the long and difficult 
calculation, the value of a is output as soon as the function is called in the 
'main' function.
Since the type of a is int, the function 'wild_computation' must also be 
initiated with 'int'.
*/

int main() {
    int b = wild_computation();
    printf("The result of the computation is %d.\n", b);
    return 0;
}

/*
What is also noticeable here is that the 'main' function is called here only as 
the last function. This is necessary because the function 'wild_computation' is 
not known when calling 'main' when going through the script from top to bottom. 
In most compilers this problem does not produce an error but a warning but it is 
a better style to define all necessary functions first and call them only then.
*/
