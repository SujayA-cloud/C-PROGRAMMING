#include <stdio.h>
typedef struct {
int emp_id;
char name[20];
float salary;
}employee;

int main(){

employee e1= {1001,"luffy",45000};
printf("employee id:%d\n name:%s\n salary:%.2f\n" ,e1.emp_id, e1.name, e1.salary);

employee e2= {1002,"zoro",48000};
printf("employee id:%d\n name:%s\n salary:%.2f\n" ,e2.emp_id, e2.name, e2.salary);

employee e3= {1003,"sanji",50000};
printf("employee id:%d\n name:%s\n salary:%.2f\n" ,e3.emp_id, e3.name, e3.salary);

int i;
for(i=3;i<3;i++){
    if(e1.salary>e2.salary && e2.salary>e3.salary && e3.salary>e1.salary && e1.salary>e3.salary){

    }
}
 printf("employee with Highest Salary:\n");
    printf("employee id: %d\n");
    printf("name: %s\n");
    printf("salary: %.2f\n");


return 0;
}
