#include <iostream>
#include "Human.hpp"

Human::Human() {};

Human::~Human() {};

std::string Human::identify() const {
    return brain.identify();
};

const Brain &Human::getBrain() const {
    return brain;
}