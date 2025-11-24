#include <stdio.h>
int main()
{
    float m1,m2,m3,total,average;
    char grade;

    printf("enter the marks of three subjects(out of 100):");
    scanf("%f%f%f,&m1,&m2,&m3");

        total=m1+m2+m3;
        average=total/3;

        printf("total marks=%.2f\n",total);
        printf("average marks=%.2f\n",average);


        if(average>=90)
        grade='A';
        else if(average>=80)
        grade='B';
        else if(average>=70)
        grade='C';
        else if(average>=60)
        grade='D';
        else if(average>=50)
        grade='E';
        else
        grade='F';


        printf("grade:%c\n", grade);
        if(average>=50)
            printf("result:PASS\n");
        else
            printf("result:FAIL\n");
        return 0;

        }
