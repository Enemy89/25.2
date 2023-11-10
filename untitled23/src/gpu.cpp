#include "gpu.h"
#include "ram.h"
#include <iostream>

void gpu_display() {
    for (int i = 0; i < 8; ++i) {
        std::cout << ram_read(i) << ' ';
    }
    std::cout << std::endl;
}
