#include <stdio.h>
#include <stdio.h>
struct book {
    char title[50];
    char author[50];

};
int main(){
    struct book b1 ={"2 states","chetan bhagat"};
    printf("title:%s\n author:%s\n",b1.title,b1.author);

    struct book b2={"five point someone","chetan bhagat"};
    printf("title:%s\n authir:%s\n",b2.title,b2.author);

    struct book b3={"revolution 2020","chetan bhagat"};
    printf("title:%s\n author:%s\n",b3.title,b3.author);

    return 0;
}
