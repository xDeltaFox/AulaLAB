//
// Created by xDeltaFox on 29/05/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>

int DeltaC_Window_Init() {
    int fd;
    struct input_event ev;
    // Replace event6 with the correct event file for your mouse
    fd = open("/dev/input/event6", O_RDONLY);
    if (fd == -1) {
        perror("Error opening device");
        exit(EXIT_FAILURE);
    }

    while (1) {
        if (read(fd, &ev, sizeof(ev)) == sizeof(ev)) {
            if (ev.type == EV_REL) {
              if (ev.code == REL_X) {
                  printf("Mouse X: %d\n", ev.value);
              } else if (ev.code == REL_Y) {
                  printf("Mouse Y: %d\n", ev.value);
              }
            } else if (ev.type == EV_KEY) {
              if (ev.value == 1) {
                  printf("Button %d Pressed\n", ev.code);
              } else if (ev.value == 0) {
                  printf("Button %d Released\n", ev.code);
              }
            }
        }
    }
    close(fd);
    return 0;
}