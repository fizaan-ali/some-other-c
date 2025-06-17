#include <stdio.h>
#include <string.h>
int main(){
    char str1[30], str2[30];
    printf("Enter the string: ");
    scanf("%[^\n]s", str1);
    char *end1; char *start2;
    end1 = str1 + strlen(str1)-1;
    start2 = str2;
    while (end1>=str1)
    {
        *start2 = *end1;
        end1--;
        start2++;
    }
    *start2 = '\0';

    printf("Original String: %s\n", str1);
    printf("Reverse string: %s", str2);
    
    return 0;
}