#include <stdio.h>
#include <stdlib.h>

int main(){
int arr[5]={12,23,35,47,59};
int n=5;
int i,key,found=0;
printf("enter element to search:");
scanf("%d",&key);

for(i=0;i<n;i++){
if(arr[i]==key){
    found=1;
    break;
}
}
if(found)
    printf("element %d found at position %d\n",key,i+1);
else
    printf("element %d not found\n",key);
return 0;
}
