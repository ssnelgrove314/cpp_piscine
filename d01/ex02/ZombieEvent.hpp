#ifndef ZOMBIEEVENT_H
#define ZOMBIEEVENT_H

#include <string>
#include <cstdlib>
#include "Zombie.hpp"

#define NAME_SIZE 5

class ZombieEvent
{
    static const std::string name_table[NAME_SIZE];
    static int name_index;
    std::string type;

    public:
        ZombieEvent();
        ~ZombieEvent();
        void setZombieType(std::string type);
        Zombie *newZombie(std::string name);
        Zombie *randomChump();
};

#endif