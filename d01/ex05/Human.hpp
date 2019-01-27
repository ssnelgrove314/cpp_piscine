#ifndef HUMAN_H
#define HUMAN_H

#include <string>
#include "Brain.hpp"

class Human
{
    const Brain brain;

public:
    Human();
    ~Human();
    std::string identify() const;
    const Brain &getBrain() const;
};

#endif
