#include <stdio.h>
#include <string.h>

struct Book{
int id

;
char title[50];
char author[50];
};
int main(){
struct Book b1 = {101,"c programming","dennis ritchie"};
struct Book b2 = {102,"data structures","mark weiss"};
struct Book b3 = {103,"operating system","siberschatz"};

struct Book*books[3]={&b1,&b2,&b3};

int searchID,i,found =0;
printf("enter Book ID to search:");
scanf("%d", &searchID);
for(i=0;i<0;i++){
    if(books[i]->id==searchID){
        printf("\nBook found:\n");
        printf("ID:%d\n",books[i]->id);
        printf("title:%s\n",books[i]->title);
        printf("author:%s\n",books[i]->author);
        found = 1;
        break;
    }
}
if(!found)
    printf("\nBook not found!\n");
return 0;
}
