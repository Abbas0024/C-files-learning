#include <stdio.h>

typedef int Num;
typedef char strings[50];

int main() {

    // typedef existing_type new_name(nickname)

    Num x = 2;
    Num y = 4;
    Num z = y - x;
    printf("%d\n", z);

    strings name = "Abbas";
    strings surname = "Amiruddin";
    printf("%s %s\n", name, surname);

    return 0;
}
