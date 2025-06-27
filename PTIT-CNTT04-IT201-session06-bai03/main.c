#include <stdio.h>

int tach(int n) {
    if (n==0)return ;
    return n%10 + tach(n/10);
}
int main(void) {
    int n= 0;
    while (n  <= 0) {
        printf("Please input a number:");
        scanf("%d", &n);
    }
    printf("%d", tach(n));

    return 0;
}