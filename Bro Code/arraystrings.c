#include <stdio.h>

int main() {

    char fruits[][10] = {"apple", "banana", "coconut"};

    for (int i = 0; i < 3; i++) {
        printf("%s ", fruits[i]);
    }

    printf("\n");

    // to get size of array of strings
    int size = sizeof(fruits) / sizeof(fruits[0]);
    for (int i = 0; i < size; i++) {
        printf("%s\n", fruits[i]);
    }

    printf("\n");

    // here we can also manipulate array fruits[] as a 2d array
    fruits[0][3] = fruits[2][5];
    fruits[1][4] = 'F';
    for (int i = 0; i < size; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
