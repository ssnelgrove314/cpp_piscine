#include <string>
#include <iostream>

void memoryLeak()
{
    std::string *panthers = new std::string("String panthere");
    std::cout << *panthers << std::endl;
    delete panthers;
}