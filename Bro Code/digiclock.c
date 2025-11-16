#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {

    time_t rawTime = 0; // Jan 1 1970 (epoch)
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning) {
        time(&rawTime);

        pTime = localtime(&rawTime);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        fflush(stdout);

        sleep(1);
    }

    return 0;
}
