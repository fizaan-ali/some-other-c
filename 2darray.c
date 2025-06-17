#include <stdio.h>
int main(){
    int rows, columns;
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);
    printf("Enter the no. of columns: ");
    scanf("%d", &columns);
    int arr[rows][columns];
    for(int i=0; i<=rows; i++){
        for(int j=0; j<=columns; j++){
            printf("Enter the value for %d %d", i,j);
            scanf("%d %d", &arr[i][j]);
        }
    }
    return 0;
}