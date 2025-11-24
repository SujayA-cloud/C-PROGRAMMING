#include <stdio.h>
int main() {
    int n, i, j, temp,key,pos=-1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements (unsorted):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
printf("enter the element to search:");
scanf("%d",&key);
for(i=0;i<n;i++){
    if(arr[i]==key){
            pos=1;
    break;
    }
}
        if(pos==-1)
        printf("element not found\n");
        else
            printf("number %d found at %d\n",key,pos);
        return 0;




}


