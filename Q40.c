#include <stdio.h>

int main() {
    int num, binary[32], i = 0;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num > 0) {
        binary[i++] = num % 10;
        num /= 10;
    }

    printf("1's Complement: ");
    while (i--) {
        printf("%d", binary[i] == 0 ? 1 : 0);
    }

    return 0;
}
