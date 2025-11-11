#include <stdio.h>

int main() {

    FILE *pFile = fopen("input.txt", "r");
    char buffer[1024] = {0}; // a buffer is required to temporily store data for efficiency and 1024bytes=1kilobyte to not use excess memory

    if (pFile == NULL) {
        printf("Error opening fle\n");
        return 1;
    }

    // one way to read files and print
    while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }

    fclose(pFile);

    return 0;
}
