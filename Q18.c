Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
#include <stdio.h>
int main() {
    int percent;
    printf("Enter percentage (0-100): ");
    scanf("%d", &percent);
    if (percent >= 90 && percent <= 100)
        printf("Grade A\n");
    else if (percent >= 80)
        printf("Grade B\n");
    else if (percent >= 70)
        printf("Grade C\n");
    else if (percent >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");
    return 0;
}
