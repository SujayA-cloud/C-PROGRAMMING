#include<stdio.h>

void inputArray(int *arr, int n);
void displayArray(int *arr, int n);
int sumArray(int *arr, int n);
int countPositive(int *arr, int n);
int countNegative(int *arr, int n);

int main(void){
int arr[100];
int n,sum,pos_C,neg_C;
printf("enter the number of elements in the array(max 100):");
if(scanf("%d",&n)!=1||n<0||n>100);
{
if(n<=0||n>100)
printf("invalid size\n");
return 1;
}

inputArray(arr,n);
printf("\nArray elements are:");
displayArray(arr,n);

sum=sumArray(arr,n);
printf("\nSum of all elements=%d",sum);

pos_C=countPositive(arr,n);
neg_C=countNegative(arr,n);

printf("\nNumber of positive elements=%d",pos_C);
printf("\nNumber of negative elements=%d\n",neg_C);

return 0;
}

void inputArray(int*arr,int n){
printf("enter %d elements:\n",n);
for(int i=0;i<n;i++){
scanf("%d",arr+i);}
}

void displayArray(int* arr,int n){
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

int countPositive(int*arr,int n){
int cnt=0;
for(int i=0;i<n;i++){
if(*(arr+i)>0)cnt++;
}
return cnt;
}
int countNegative(int*arr,int n){
int cnt=0;
for(int i=0;i<n;i++){
if (*(arr+i)<0)cnt++;
}
return 0;
}
