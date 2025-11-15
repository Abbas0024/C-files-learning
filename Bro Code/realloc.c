#include <stdio.h>
#include <stdlib.h>

int main() {

    // realloc() = resize previously allocated memory
    // realloc(pointer, bytes)

    int number = 0;
    printf("Enter number of prices for store ");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if (prices == NULL) {
        printf("Memory allocation error\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    // here we where we will use realloc if we want to add more prices
    int newNumber = 0;
    printf("Enter new number of prices ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float)); // we use temp as good pracitce for realloc

    if (temp == NULL) {
        printf("Reallocation of memory failed\n");
        // here we dont need to stop program as we arent using temp anywhere and also we need other pointers ka work to still continue
    } else {
        prices = temp; // now prices(our main pointer) points to the new memory now instead of the old one
        // temp = NULL -----> if we plan to reuse temp pointer

        for (int i = number; i < newNumber; i++) {
            printf("Enter price #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }

        for (int i = 0; i < newNumber; i++) {
            printf("$%.2f ", prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}
