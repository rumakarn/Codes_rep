#include <stdio.h>
int main() {
    int n, rev = 0, remainder,twice;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    twice=2*rev;
    printf("the double of reversed number is %d",twice);
    return 0;
}