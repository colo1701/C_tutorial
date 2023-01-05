#include <stdio.h>

int main() {
    int a = 4;
    int b = 3;
    int c = -1;
    int d = -2;
    
    /*
    The logical operator '&&' stands for "and" and requires both, the left and 
    the right argument to be True in order to execute the inner command of the 
    query.
    */
  
    if(b >= 0 && a == 4) {
        printf("b is equal to or larger than 0 and a is 4.\n");
    }
    else {
        printf("b is smaller than 0 or a is not 4.\n");
    }
    
    /*
    The logical operator '||' stands for "or" and requires at least one of the 
    two arguments to be True in order to execute the inner command of the query. 
    These logical operators can be linked freely.
    */
  
    if(c >= 0 || d >= 0) {
        printf("c or d is equal to or greater than 0.\n");
    }
    else {
        printf("c and d are smaller than 0.\n");
    }

    /*
    Note that there's a '!' in the last condotion which means "not" and 
    negates the following statement.
    */
    if ((b >= 0 || a == 4) && (b < 70 || !(a < -120))) {
        printf("At least one of the conditions 'b >= 0' and 'a == 4 is True\n");
        printf("as well as at least one of the conditions 'b < 70' and\n");
        printf("'not a < -120'.\n");
    }
  
    return 0;
}
