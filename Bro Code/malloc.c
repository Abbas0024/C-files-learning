#include <stdio.h>
#include <stdlib.h>

int main() {

    // malloc() = dynanmically allocates a specified number of bytes in memory
    // malloc(byte)

    // this to get how many bytes in memory we have to store using malloc
    int number = 0;
    printf("How many grades will you enter ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));

    // to avoid segmentation faults
    if (grades == NULL) {
        printf("Memory allocation error\n");
        return 1;
    }

    // lets get grades now
    for (int i = 0; i < number; i++) {
        printf("Enter grade #%d", i + 1);
        scanf(" %c", &grades[i]);
    }

    // lets print grades no
    for (int i = 0; i < number; i++) {
        printf("%c ", grades[i]);
    }

    free(grades);  // returning "rented" space in memory back to OS
    grades = NULL; // to avoid dangling pointers(pointers that refernce unavialable or invalid memory locations)

    return 0;
}
