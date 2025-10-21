#include <stdio.h>

int main() {

    int nums[] = {1, 2, 4, 6, 8, 8};
    char grades[] = {'A', 'B', 'B', 'A', 'S'};
    char arrays[] = "abbas";

    printf("%d\n", nums[0]);
    printf("%c\n", grades[2]);
    printf("%c\n", arrays[3]);

    nums[3] = 600;

    for (int i = 0; i < 6; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");

    // to get length of arrays:
    int size = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
