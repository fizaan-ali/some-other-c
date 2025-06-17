#include <stdio.h>
int main(){

    int *p;
    printf("%d\n", *p);
    printf("%p\n", p);

    int *ptr = NULL;
    printf("%d\n", *ptr);
    printf("%p", ptr);

    return 0;
}