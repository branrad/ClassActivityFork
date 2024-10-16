#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        // Child process
        printf("Sending notification to homeowner's phone.\n");
    } else {
        // Parent process
        printf("Sounding the alarm!\n");
    }

    return 0;
}
