#include <stdio.h>
#include <stdlib.h>

int main() {


    char path[] = "C:\\Users\\ACE\\OneDrive\\Documents\\co report 2.pdf";

    char command[600];
    sprintf(command, "start \"\" \"%s\"", path);

    system(command);

    printf("Opening file / URL...\n");
    return 0;
}
