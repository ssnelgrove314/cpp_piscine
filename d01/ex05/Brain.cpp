#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() 
{};

Brain::~Brain()
{};

std::string Brain::identify() const
{
    std::stringstream buf;
    buf << this;
    return buf.str();
}