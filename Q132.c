#include <stdio.h>

enum Level {Low, Medium, High};

int main() {
    enum Level l = High;
    switch(l) {
        case Low: printf("Low"); break;
        case Medium: printf("Medium"); break;
        case High: printf("High"); break;
    }
    return 0;
}
