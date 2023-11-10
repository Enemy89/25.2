#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include <iostream>

int main() {
    while (true) {
        std::string command;
        std::cout << "Enter command (sum/save/load/input/display/exit): ";
        std::cin >> command;

        if (command == "sum") {
            cpu_compute();
        } else if (command == "save") {
            disk_save();
        } else if (command == "load") {
            disk_load();
        } else if (command == "input") {
            kbd_input();
        } else if (command == "display") {
            gpu_display();
        } else if (command == "exit") {
            break;
        }
    }
}
