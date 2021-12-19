#include <iostream>
#include "cpu.h"
#include "ram.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"

int main()
{
    while (true)
    {
        std::string command;
        std::cout << "Command:";
        std::cin >> command;
        if (command == "sum")
        {
            sum();
        }
        else if (command == "save")
        {
            save();
        }
        else if (command == "load")
        {
            load();
        }
        else if (command == "input")
        {
            input();
        }
        else if (command == "display")
        {
            display();
        }
        else
        {
            std::cerr << "Unknown command: " << command << std::endl;
        }
    }
}