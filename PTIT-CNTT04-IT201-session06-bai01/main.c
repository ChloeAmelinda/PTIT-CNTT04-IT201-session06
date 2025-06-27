#include <stdio.h>
#include <stdlib.h>

void printfBinary (int n) {
    if (n == 0) {
        return;
    }
    printfBinary(n/2);
    printf("%d", n%2);
}
int main(void) {
    int n =0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d",&n);
    }
    if (n==0) {
        printf("so nhi phan cua 0 la : 0");
        return 0;
    }
    printf("so nhi phan :");
    printfBinary(n);

    return 0;
}
