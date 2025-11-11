#include <stdio.h>

typedef struct {
    char name[25];
    int year;
    int price;
} Car;

int main() {

    Car cars[] = {{"BMW", 2020, 32000}, {"Mercedes", 2005, 45000}, {"Bolero", 2013, 700000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < number; i++) {
        printf("%s %d $%d\n", cars[i].name, cars[i].year, cars[i].price);
    }

    return 0;
}
