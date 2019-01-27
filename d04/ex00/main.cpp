#include <iostream>
#include <string>
#include "inc/Peon.hpp"
#include "inc/Sorcerer.hpp"
#include "inc/Victim.hpp"

int main()
{
    Sorcerer    robert("Robert", "the Magnificent");
    Victim      jim("Jimmy");
    Peon        joe("Joe");

    std::cout << robert << jim << joe;

    robert.polymorph(jim);
    robert.polymorph(joe);

    return 0;
}