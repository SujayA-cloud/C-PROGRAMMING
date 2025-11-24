#include <stdio.h>
#include <stdlib.h>

int main() {
int arr[10];
int n, value,i ;
printf("Enter number of elements(max 10): ");
scanf("%d", &n);
printf("Enter %d elements (unsorted order): ", n);
for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
    }
printf("Enter the value to insert: ");
scanf("%d", &value);
for(i=n - 1; (i>=0 && arr[i] > value); i--) {
arr[i + 1] = arr[i];
    }
arr[i + 1] = value;
n++;
printf("sorted array: ");
for(i = 0; i < n; i++) {
printf("%d ", arr[i]);
    }
return 0;
}
