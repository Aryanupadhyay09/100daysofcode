#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    int swapped = last * pow(10, digits) + (num % (int)pow(10, digits));
    swapped = swapped - last + first;

    printf("Swapped number: %d\n", swapped);
    return 0;
}
