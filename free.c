#include <stdio.h> 
#include <stdlib.h>
int main(){
    
    // int *ptr = (int *) malloc(4*4);
    // ptr ++;
    // free(ptr); 
    // The program would give error the ptr inside free functions should point to first location.
    int *ptr = (int *) malloc(4 * 10);
    int *p = ptr;
    p++;
    free(ptr); //  This is right....

    return 0;
}