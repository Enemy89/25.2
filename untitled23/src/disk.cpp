#include "disk.h"
#include "ram.h"
#include <fstream>
#include <iostream>

void disk_save() {
    std::ofstream file("C:\\\\Users\\\\Rhan\\\\CLionProjects\\\\untitled23\\\\src\\\\data.txt");
    if (file.is_open()) {
        for (int i = 0; i < 8; ++i) {
            file <<ram_read(i) << std::endl;
        }
        file.close();
        std::cout << "Data saved to data.txt\n";
    } else {
        std::cerr << "Error: Unable to open data.txt for writing\n";
    }
}

void disk_load() {
    int ram_buffer[8];
    for (int i = 0; i < 8; ++i) {
        ram_buffer[i]=ram_read(i);
    }

    std::ifstream file("C:\\\\Users\\\\Rhan\\\\CLionProjects\\\\untitled23\\\\src\\\\data.txt");
    if (file.is_open()) {
        for (int i = 0; i < 8; ++i) {
            file >> ram_buffer[i];
            ram_write(i,ram_buffer[i]);
        }
        file.close();
        std::cout << "Data loaded from data.txt\n";
    } else {
        std::cerr << "Warning: Unable to open data.txt for reading. Using default values.\n";
    }
}