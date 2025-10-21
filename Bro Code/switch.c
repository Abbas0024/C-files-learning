#include <stdio.h>

int main() {
    int dayofweek = 5;

    switch (dayofweek) {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wendesday");
        break;

    default:
        printf("too lazy to add other days! lol");
    }

    // works the same with characters, instead of numbers the cases will have chars
    return 0;
}
