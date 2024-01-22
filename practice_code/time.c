#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *localTime;

    // Get the current time
    time(&currentTime);

    // Convert the current time to local time
    localTime = localtime(&currentTime);

    // Print the local time
    printf("\n\nCurrent local time: %s\n", asctime(localTime));
    printf("Date : %s\n", __DATE__);
    printf("TIME : %s\n", __TIME__);
    return 0;
}
