#include <stdio.h>

enum Month {Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

int main() {
    enum Month m;
    scanf("%d", &m);
    printf("%d", m);
    return 0;
}
