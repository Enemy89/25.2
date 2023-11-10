#include "ram.h"

int ram_buffer[8];

void ram_write(int index, int value) {
    ram_buffer[index] = value;
}

int ram_read(int index) {
    return ram_buffer[index];
}