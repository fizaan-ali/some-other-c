#include <stdio.h>
#include <string.h>
int main(){
    typedef struct book{
        char name[20];
        int pages;
        float price;
    } book;
    book a, b, c;
    strcpy(a.name, "Chemistry");
    a.pages = 350;
    a.price = 125.3;

    strcpy(b.name = "Physics");
    b.pages = 329;
    b.price = 124.2;

    strcpy(c.name = "Biology");
    c.pages = 394;
    c.price = 352.2;

    for(char i = 'a'; i<='c', i++){
        printf("Name = %s\n", i.name);
        printf("No. of pages = %d\n", i.pages);
        printf("Price = %.2f\n\n", i.price);
    }

    return 0;
}