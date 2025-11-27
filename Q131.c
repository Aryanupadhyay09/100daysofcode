

#include <stdio.h>

enum Day {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main() {
    enum Day d = Wed;
    printf("%d", d);
    return 0;
}
