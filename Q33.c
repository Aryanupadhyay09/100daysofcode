#include <stdio.h>

int main() {
    int num, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
