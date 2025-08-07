#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid = fork(); // Create child process

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    }
    else if (pid == 0) {
        // Child Process
        printf("I am the Child Process. PID = %d\n", getpid());
    }
    else {
        // Parent Process
        printf("I am the Parent Process. PID = %d, Child PID = %d\n", getpid(), pid);
    }

    return 0;
}
