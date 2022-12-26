#include <stdio.h>

int main() {
    char grade = 'B';
    
    /*
    'switch case' is a very comfortable solution to list long branched if commands in a clearer way.
    In the switch argument one needs to define the variable to be checked (in this case 'grade').
    Afterwards on can easily list up all necessary cases and what to do if case is True.
    If you want the switch case to stop after the first True case you have to add 'break;' to the case,
    otherwise the sqitch will proceed running.
    At the end of the case list you can define a default command that will be executed, if none of the 
    cases outputs a True statement.
    */
    
    switch(grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Very good!\n");
            break;
        case 'C':
            printf("Still good\n");
            break;
        case 'D':
            printf("Still okay\n");
            break;
        case 'F':
            printf("Fucked up!\n");
            break;
        default: 
            printf("Not a grade!\n");
            break;
    }
    
    /*
    If you want to run the same command on several cases you can list up all those commands right below each 
    other and put the command only in the last case of this list. See the next switch case for an example.
    You can see that the string 'Still good' wil be put out in case B, C and D.
    */
    
    switch(grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'C':
        case 'D':
            printf("Still good\n");
            break;
        case 'F':
            printf("Fucked up!\n");
            break;
        default: 
            printf("Not a grade!\n");
            break;
    }
    
    return 0;
}
