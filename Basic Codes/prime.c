#include <stdio.h>

int main() {
    int n;
    printf("enter a number ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("the number is not prime");
    } else {
        int isPrime = 1;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("the number is prime");
        } else {
            printf("the number is not prime");
        }
    }

    return 0;
}