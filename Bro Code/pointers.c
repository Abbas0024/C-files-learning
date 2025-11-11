#include <stdio.h>

void birthday(int *age);

int main() {

    int age = 25;
    printf("%p\n", &age); // gives the hexadecimal address of age variable 1

    // saving the address og variable age in a pointer
    int *pAge = &age;
    printf("%p\n", pAge);

    birthday(&age); // we can just use memory addresses of variables instead of making an entire variable to use in functions
    printf("You are %d years old\n", age);

    return 0;
}

// functions are *pass by value*, meaning that they make a copy of the variable, so nomrally we would be adding one to the copy of age variable and
// not original age variable itself, so we need to do *pass by reference* if we want to change the original vairable in a function.
void birthday(int *age) {
    // using wihtout derefernce operator we end up incrimenting memory address of age which makes no sense, so we use dereference operator
    (*age)++;
    // so we here we first dereference age to get its value and then increment it
}
