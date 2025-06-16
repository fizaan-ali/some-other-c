#include <stdio.h>
#include <string.h>

struct book{
    char name[50];
    float price;
    int ch;
};
int main(){

    struct book b1;
    
    strcpy(b1.name, "Chemistry");
    b1.price = 450.9;
    b1.ch = 15;


    printf("The name of the book is:  %s\n", b1.name);
    printf("The price of the book is %.2f\n", b1.price);
    printf("The no. of chapters in this book is: %d\n", b1.ch);

    return 0;
}