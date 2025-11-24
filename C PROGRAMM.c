#include<stdio.h>

void inputArray(int*arr,int n){
printf("enter %d elements:\n",n);
for(int i=0;i<n;i++){
scanf("%d",arr+i);
}
}
void displayArray(int*arr,int){
for(int i=0;i<n;i++){
printf("%d",*(arr+i));
}
}int sumArray(int*arr,int n){
int sum=0;
for(int i=0;i<n;i++){
sum+=*(arr+i);
}
return sum;
}
/*countPositive(>0)*/
int countPositive(const int*arr,int n){
int cnt=0;

for(int i=0;i<n;i++){
if(*(arr+i)>0)cnt++;
}
return cnt;
}
int countNegative(const int*arr,int n){
int cnt=0;
for(int i=0;i<n;i++){
if (*(arr+i)<0)cnt++;
}
return 0;
}
