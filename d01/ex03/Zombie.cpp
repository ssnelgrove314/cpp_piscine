#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string z_name, std::string z_type) :
name(z_name), type(z_type)
{
    if (type == "")
        type = "normal";
};

Zombie::~Zombie()
{
    std::cout << "$" << name << " is now dead" << std::endl;
};

void const Zombie::announce()
{
    std::cout << type << " zombie " << name << "> BrAiNzzzzzzz  i wAnt BrrRRaaiInZZ" << std::endl;
};

std::string Zombie::getName()
{
    return (name);
}