#include <stdio.h>
int main(){
 int arr[10];
 int n=10;
    int i, j, temp;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int arr[];
int n;
int key,low=0,high=n-1,mid;


while(low<=high){
    mid=(low + high)/2;
    if(arr[mid]== key){
        break;
    }
    else if(key<arr[mid])
        high= mid-1;
        else
            low=mid+1;

    return -1;
}
