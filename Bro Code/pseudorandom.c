#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // if we just use rand(), it will always give the same answer
    // so we tell it to make based on the current time like this
    srand(time(NULL));

    printf("%d\n", rand());                    // now this prints random numbers
    printf("maximum random = %d\n", RAND_MAX); // depends on OS and compiler

    // now we see how to make random numbers between two limits using a maths ahh formula
    int min_lim = 35;
    int max_lim = 65;
    int randNum = (rand() % (max_lim - min_lim + 1)) + min_lim; // ahh formula
    printf("\npseduo random = %d\n", randNum);

    return 0;
}
