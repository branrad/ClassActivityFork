#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        // Child process (image processing)
        printf("Image processing started...\n");
    } else {
        // Parent process waits for child
        wait(NULL);
        printf("Image processing complete, ready to move the robotic arm.\n");
    }

    return 0;
}
