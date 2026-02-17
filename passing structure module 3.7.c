#include <stdio.h>
struct  stud {
int id;
char name[20]
 };

     void display(struct stud s[],int n )
     {
         for(int i=0;i<n;i++)
            printf("id:%d,name:%s\n",s[i].id,s[i].name);
     }
 int main(){
 struct stud s[3]={{101,"ace"},{102,"light"}};
 display(s,3);
 return 0;
 }
