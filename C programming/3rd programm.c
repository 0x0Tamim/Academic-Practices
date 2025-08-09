#include <stdio.h>
#include <time.h>
#include <unistd.h> // for sleep function

int main() {
    while (1) {
        time_t currentTime;
        struct tm *timeInfo;
        char timeString[9]; // HH:MM:SS + '\0'

        time(&currentTime);
        timeInfo = localtime(&currentTime);

        strftime(timeString, sizeof(timeString), "%H:%M:%S", timeInfo);

        printf("\r%s", timeString);
        fflush(stdout); // Flush the output buffer to display the time immediately

        sleep(1); // Wait for one second before updating the time
    }

    return 0;
}






