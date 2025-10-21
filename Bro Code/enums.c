#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY = 7,
    FRIDAY,
    SATURDAY
}; // we use all capital letters coz C requires it according to variable naming rules
   // here SUNDAY is assigned 0, and MONDAY 1 and so onn... (these are by default)
   // we can change value ourselves also but it increase +1 from the previous value if undefined

// here we can use enums with typedef to make reading easier
typedef enum {
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUNE,
} Months;

int main() {

    // enum = user defined data type that consists of a set of named integer constants.
    // Benefits = replaces numbers with readable names

    enum Day today = WEDNESDAY;
    printf("%d\n", today);

    Months current = FEB;
    printf("Number of the current month is: %d\n", current);

    // some stuff we can do with enums
    if (current == JAN || current == FEB) {
        printf("Winter\n");
    } else {
        printf("Summer\n");
    }

    return 0;
}
