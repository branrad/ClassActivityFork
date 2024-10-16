#include <stdio.h>
#include <unistd.h>

int main() {
    int pid = fork();

    if (pid == 0) {
        // Child process runs the plugin (simulated with echo)
        char *args[] = {"/bin/echo", "Plugin: Fetching weather forecast...", NULL};
        execv("/bin/echo", args);
    } else {
        // Parent process continues monitoring temperature
        printf("Thermostat monitoring temperature.\n");
    }

    return 0;
}
