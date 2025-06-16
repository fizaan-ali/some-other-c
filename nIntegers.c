#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter the no. of integers you want:  ");
    scanf("%d", &n);

    int *ptr = (int *) malloc(n * sizeof(int));

    int *p = ptr;
    for(int i=1; i<=n; i++){
        scanf("%d", &(*p));
        p++;
    }
    p = ptr;
    for(int i=1; i<=n; i++){
        printf("%d ", *ptr);
        ptr++;
    }

    free(ptr);

    ptr = NULL;

    return 0;
}