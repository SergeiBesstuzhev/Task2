#include <iostream>
#include "kbd.h"
#include "ram.h"

void input()
{
    int buffer[8];
    std::cout << "Enter 8 digits:";
    for (int i = 0; i < 8; ++i)
    {
        std::cin >> buffer[i];
    }
    write(buffer);
}