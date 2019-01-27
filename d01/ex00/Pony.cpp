#include "Pony.hpp"

Pony::Pony(std::string pname, std::string pcolor, int page, int pweight, int pheight)
{
    name = pname;
    color = pcolor;
    age = page;
    weight = pweight;
    height = pheight;
    printPony();
}

Pony::~Pony()
{
    std::cout << "Pony " << name << " was ground up for glue." << std::endl;
};

void Pony::printPony()
{
    std::cout
        << "Pony name: " << name 
        << " color: " << color
        << " age: " << age 
        << " weight: " << weight 
        << "lbs height: " << height
        << std::endl;
}