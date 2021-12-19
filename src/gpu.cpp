#include "gpu.h"
#include "ram.h"
#include <iostream>

void display()
{
    int buffer[8];
    read(buffer);
    std::cout << "Numbers: ";
    for (int i = 0; i < 8; ++i)
    {
        std::cout << buffer[i] << ", ";
    }
    std::cout << std::endl;
}