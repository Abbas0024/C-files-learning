#include <stdbool.h>
#include <stdio.h>

int main() {

    // (condition) ? valueiftrue : valueiffalse

    int x = 55;
    int y = 33;
    int max = (x > y) ? x : y;
    printf("%d\n", max);

    bool isOnline = 0;
    printf("%s\n", (isOnline) ? "online" : "offline");

    int number = 38;
    printf("%d is %s\n", number, (number % 2 == 0) ? "even" : "odd");

    return 0;
}
