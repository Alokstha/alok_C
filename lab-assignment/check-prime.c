// WAP to check whether the given number is prime number or not

#include <stdio.h>
int main() {
    int i, number, temp = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            temp++;
            break;
        }
    }

    if (temp == 0 && number != 1) {
        printf("%d is a prime number", number);
    } else {
        printf("%d is not a prime number", number);
    }
    return 0;
}