#include <stdio.h>
#include <string.h> // to counter fgets "enter" registering issue

int main() {

    int age;
    float gpa;
    char thingy = '\0'; // sets to null terminator(marks end of string)
    char name[33] = "";

    printf("send age ");
    scanf("%d", &age);

    printf("send gpa ");
    scanf("%f", &gpa);

    printf("send thingy ");
    // here we add space before format specifier so that it clear the \n in the input buffer so that it can take the input
    scanf(" %c", &thingy);

    // there is a special way to take input of strings:
    getchar(); // again used to clear the input buffer but we cannot use the previous method here
    printf("enter name ");
    fgets(name, sizeof(name), stdin); // this way coz scanf stops registering inputs after whitespace
    // also here when we press "enter" after entering name "fgets" will register that also, so to counter it:
    name[strlen(name) - 1] = '\0'; // here we take the final registered input of our string and set it to null terminator

    printf("age is %d\n", age);
    printf("gpa is %.2f\n", gpa);
    printf("thingy is %c\n", thingy);
    printf("name is %s\n", name);

    return 0;
}
