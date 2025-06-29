#include <stdio.h>
#include <stdlib.h>

int max(int arr[],int n) {
    int max=arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i]>max) {
            max= arr[i+1];
        }
    }
    return max;

}
int min(int arr[],int n) {
    int min=arr[0];
    for(int i=0;i<n;i++) {
        if(arr[i] < min) {
            min= arr[i-1];
        }
    }
    return min;
}

int main(void) {
    int n=0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d", &n);
    }
    int *arr = (int*)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Max = %d\n", max(arr,n));
    printf("Min = %d\n", min(arr,n));
    return 0;
}
