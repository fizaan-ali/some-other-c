#include <stdio.h>
int main(){
    typedef int integer;
    integer a = 1, b = 3;
    printf("a = %d, b = %d\n", a, b);

    typedef int* int_pointer;
    int_pointer x = &a, y = &b;
    printf("a = %d, b = %d\n", *x, *y);

    typedef float decimal;
    decimal c = 3.2, d = 52.3;
    printf("c = %.2f, d = %.2f\n", c, d);
    
    return 0;
}