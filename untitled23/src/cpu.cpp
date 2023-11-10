#include "cpu.h"
#include "ram.h"
#include <iostream>

void cpu_compute() {
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += ram_read(i);
    }
    std::cout << "Sum: " << sum << std::endl;
}