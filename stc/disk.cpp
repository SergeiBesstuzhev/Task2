#include <fstream>
#include "disk.h"
#include "ram.h"

void save()
{
    std::ofstream out("numbers.txt");
    int buffer[8];
    read(buffer);
    for (int i = 0; i < 8; ++i)
    {
        out << buffer[i] << std::endl;
    }
}

void load()
{
    std::ifstream in("numbers.txt");
    int buffer[8];
    for (int i = 0; i < 8; ++i)
    {
        in >> buffer[i];
    }
    write(buffer);
}