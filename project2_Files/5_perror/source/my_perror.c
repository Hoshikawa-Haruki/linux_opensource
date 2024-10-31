#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void my_perror(char *message) {
    if (message != NULL && *message != '\0') {
        fprintf(stderr, "%s: %s\n", message, strerror(errno));
    } else {
        fprintf(stderr, "%s\n", strerror(errno));
    }
}