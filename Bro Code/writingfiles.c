#include <stdio.h>

int main() {

    FILE *pFile = fopen("output.txt", "w");
    char text[] = "BOOTY BOOTY BOOTY\n ROCKIN' EVERYWHERE";

    if (pFile == NULL) {
        printf("Error opening fle\n");
        return 1; // here this line is very important because it tells the program that an error(return 1) occured and to stop runnin ANY code and
                  // exit the main() function , a break statement(only for iteration blocks tho) would only stop the current block, we want the entire
                  // program to stop and to not execute the write statement below it which will result in writing to a null pointer
    }
    fprintf(pFile, "%s", text);

    fclose(pFile); // ALWAYS CLOSE FILES !!!!!!!!

    return 0;
}
