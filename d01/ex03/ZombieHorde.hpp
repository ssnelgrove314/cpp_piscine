#ifndef ZOMBIE_HORDE_H
#define ZOMBIE_HORDE_H

#include <string>
#include <cstdlib>
#include "Zombie.hpp"

#define NAME_SIZE 5
#define TYPE_SIZE 5

class ZombieHorde
{
    static const std::string nameTable[NAME_SIZE];
    static const std::string typeTable[NAME_SIZE];
    int hordeSize;
    Zombie **horde;

    public:
        void announce();
        ZombieHorde(const int hordeSize);
        ~ZombieHorde();
};

#endif