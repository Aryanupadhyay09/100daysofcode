#include <stdio.h>

int factorial(int n) {
    int f = 1;
    while (n > 1)
        f *= n--;
    return f;
}

int main() {
    int num, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
        printf("Strong number\n");
    else
        printf("Not a strong number\n");

    return 0;
}
