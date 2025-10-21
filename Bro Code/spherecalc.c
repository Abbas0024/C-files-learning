#include <math.h>
#include <stdio.h>

int main() {

    const float pi = M_1_PI;
    int radius = 0;
    float volume = 0.0f;
    float area = 0.0f;

    printf("Enter the radius: ");
    scanf("%d", &radius);

    volume = (4.0f / 3.0f) * pi * pow(radius, 3);
    area = 4 * pi * pow(radius, 2);

    printf("Area = %f\n", area);
    printf("Volume = %f\n", volume);

    return 0;
}
