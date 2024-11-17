#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <string.h>

#define DAEMON_FILE "/home/mydaemon.sys"
#define SLEEP_TIME 10

void write_daemon_info() {
    FILE *fp = fopen(DAEMON_FILE, "a");
    if (fp == NULL) {
        perror("Failed to open file");
        exit(EXIT_FAILURE);
    }

    time_t now = time(NULL);
    struct tm *tm_info = localtime(&now);
    char time_str[26];
    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", tm_info);

    fprintf(fp, "PID: %d, Time: %s\n", getpid(), time_str);
    fclose(fp);
}

int main() {
    pid_t pid = fork(); // First fork

    if (pid < 0) {
        perror("First fork failed");
        exit(EXIT_FAILURE);
    }

    if (pid > 0) {
        // Parent process exits
        exit(EXIT_SUCCESS);
    }

    // Child process continues
    umask(0); // Reset file mode creation mask
    pid_t sid = setsid(); // Create a new session
    if (sid < 0) {
        perror("setsid failed");
        exit(EXIT_FAILURE);
    }

    // Second fork
    pid = fork();

    if (pid < 0) {
        perror("Second fork failed");
        exit(EXIT_FAILURE);
    }

    if (pid > 0) {
        // Parent process exits
        exit(EXIT_SUCCESS);
    }

    // Child process (daemon) continues
    chdir("/"); // Change working directory to root
    close(STDIN_FILENO); // Close stdin
    close(STDOUT_FILENO); // Close stdout
    close(STDERR_FILENO); // Close stderr

    while (1) {
        write_daemon_info(); // Write daemon info to file
        sleep(SLEEP_TIME); // Sleep for 10 seconds
    }

    return 0;
}