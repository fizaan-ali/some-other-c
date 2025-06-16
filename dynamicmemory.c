#include <stdio.h>
#include <stdlib.h>

int main(){
    int * ptr = (int *) malloc(10 * sizeof(int));
    printf("%d\n", *ptr);

    int *_ptr = (int *) calloc(10, sizeof(int));
    printf("%d\n", *_ptr);

    return 0;
}