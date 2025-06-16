#include <stdio.h>
int main(){
    int arr[6];
    int* ptr = arr;
    for(int i=1; i<=6; i++){
        scanf("%d", &(*ptr));
        ptr++;
    }
    for(int i=1; i<=6; i++){
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}