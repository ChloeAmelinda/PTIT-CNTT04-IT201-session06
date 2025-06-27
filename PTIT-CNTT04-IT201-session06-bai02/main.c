#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n == 0)return 0;
    if (n == 1)return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {

        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;

        }
        arr[j + 1] = temp;
    }

}
int main(void) {
//nhap n
    int n=0;
    while (n <= 0) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    //cap phat
    int *arr = malloc(sizeof(int) * n);
    if (arr == NULL) {
        printf("Memory allocation error!");
        return 1;
    }
    //in fibonnaci
for (int i = 0; i < n; i++) {
    printf("%d\t ", fibonacci(i));
    arr[i]=fibonacci(i);
}
    printf("\n");
insertionSort(arr, n);
   for (int i=n-1; i>=0; i--) {
       printf("%d\t",arr[i]);
   }
    return 0;
}