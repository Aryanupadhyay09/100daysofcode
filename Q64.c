#include <stdio.h>
int main() {
    int num, freq[10] = {0}, digit;
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    int max = 0, maxDigit = 0;
    for (int i = 0; i < 10; i++)
        if (freq[i] > max) { max = freq[i]; maxDigit = i; }
    printf("%d", maxDigit);
    return 0;
}
