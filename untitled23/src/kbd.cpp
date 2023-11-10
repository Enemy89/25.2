#include "kbd.h"
#include "ram.h"
#include <iostream>

void kbd_input() {
    std::cout << "Enter 8 numbers:\n";
    for (int i = 0; i < 8; ++i) {
        int value;
        std::cin >> value;
        ram_write(i, value);
    }
    std::cout << "Input completed.\n";
}