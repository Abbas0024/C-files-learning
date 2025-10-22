#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}; // can use typedef here to make declaring them below easier

void printStudent(struct Student student);

int main() {

    // structs are a custom container whihc holds multiple pieces of related
    // information (similar to objects in other languages)

    struct Student student1 = {"Abbas", 19, 4.5, true};
    struct Student student2;       // this will have all garbage values as this block in memory hasnt been rewritten
    struct Student student3 = {0}; // here all of the values are reset to 0;

    // adding member of structs after initialization
    strcpy(student3.name, "Bobby"); // how to add character arrays if not added in initialization
    student3.age = 35;
    student3.gpa = 2.55;
    student3.isFullTime = false;

    printf("%s\n", student1.name); // "." is the member access specifier
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "Yes" : "No");

    printf("%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", (student2.isFullTime) ? "Yes" : "No");

    printf("\n%s\n", student3.name);
    printf("%d\n", student3.age);
    printf("%.2f\n", student3.gpa);
    printf("%s\n", (student3.isFullTime) ? "Yes" : "No");

    printStudent(student1);

    return 0;
}

// we can also use structs with functions;
void printStudent(struct Student student) {
    printf("\nName: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Is Full Time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}
