#include <stdio.h>
struct  student {
int id;
char name[20]
 };
    void display(struct student*s){
    printf("id:%d\n",s->id);
    printf("name:%s\n",s->name);
    }
    int main(){
   struct student s1={101,"luffy"};
   display(&s1);
   return 0;
    }
