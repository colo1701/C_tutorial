#include <stdio.h>

/*
We are trying to write a function that outputs an array. The array 'a' with 
length 'l' that is output should have the form
    
    [a[0], a[1], ..., a[l]]
    
This is done by the printArray() function. The function takes the name and 
length of the array and prints its elements in order in the desired form.
################################################################################
The length is important for processing because we wrote the function for an 
array with a variable length. This can be recognized by the fact that the 
parameter 'arr[]' is written with an empty bracket. If the function is to accept 
a fixed size element, this size must be entered in the function parameters. 
This limits the function in its possibilities, but saves the passing of the 
parameter 'size', which would then have to be removed from the function.
*/

void printArray(int arr[], int size) {
    int i;
    printf("[");
    for(i = 0; i < size-1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("%d]\n", arr[size-1]);
}

int main()
{
    int arrLength = 10;
    int a[arrLength];
    int i;
    for(i = 0; i < arrLength; i++) {
        a[i] = (i-1) * (i+1);
    }
    printArray(a, arrLength);
    return 0;
}
