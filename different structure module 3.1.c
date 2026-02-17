#include <stdio.h>
struct student{
int id;
char name[20];
float marks;
};
int main(){
struct student s1 = {101,"rangiku",89.5};
printf("id:%d\n",s1.id);
printf("name: %s\n",s1.name);
printf("marks:%.2f\n",s1.marks);

struct student s2 = {102,"rukia",90.3};
printf("id:%d\n",s2.id);
printf("name:%s\n",s2.name);
printf("marks:%.2f\n",s2.marks);

struct student s3 = {103,"nami",92.4};
printf("id:%d\n",s3.id);
printf("name:%s\n",s3.name);
printf("marks:%.2f\n",s3.marks);

return 0;
}
