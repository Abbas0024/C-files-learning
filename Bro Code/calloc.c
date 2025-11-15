#include <stdio.h>
#include <stdlib.h>

int main() {

    // calloc() = Contiguos allocation - allocates memory dynamically and sets all allocated bytes to 0;
    // malloc() is faster but calloc() leads to fewer bugs
    // calloc(numberofelements, sizeofeachelement)

    int number = 0;
    printf("Enter number of grades ");
    scanf("%d", &number);

    char *grades = calloc(number, sizeof(char));

    if (grades == NULL) {
        printf("Memory allocation error\n");
        return 1;
    }

    // lets see what is stored in each element of our array
    for (int i = 0; i < number; i++) {
        printf("%d ", grades[i]);
    } // now we can use this array however we want

    free(grades);
    grades = NULL;

    return 0;
}
