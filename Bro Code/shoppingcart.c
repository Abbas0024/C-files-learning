#include <stdio.h>
#include <string.h>

int main() {

    float price = 0.0f;
    char item[35] = "";
    int quantity = 0;
    float total = 0.0f;

    printf("What would you like to buy ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("How many would you like ");
    scanf("%d", &quantity);

    printf("What is the price ");
    scanf("%f", &price);

    total = quantity * price;

    printf("You have bought %d %s\n", quantity, item);
    printf("The total is: %.2f\n", total);

    return 0;
}
