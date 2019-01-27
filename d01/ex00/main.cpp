#include <iostream>
#include <string>
#include "Pony.hpp"

void ponyOnTheStack(std::string na, std::string co, int a, int wht, int hgt)
{
    Pony stack = Pony(na, co, a, wht, hgt);
}

void ponyOnTheHeap(std::string na, std::string co, int a, int wht, int hgt)
{
    Pony *heap = new Pony(na, co, a, wht, hgt);
    delete heap;
}

int main() 
{
    ponyOnTheHeap("Sparkles", "Sparkly", 19, 400, 78);
    ponyOnTheStack("Shadowmere", "Shadow", 1000000, 0, 1000);
    std::cout << "All the ponies were ground up for glue. 🐴" << std::endl;
    return (0);
}