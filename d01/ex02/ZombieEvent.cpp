#include <string>
#include <iostream>
#include "ZombieEvent.hpp"

const std::string ZombieEvent::name_table[5] = {
    "zzarbb", "Zzzzack", "Zeefezz", "ZzzzzzZzzz", "ZomZang"
};
int ZombieEvent::name_index = 0;

ZombieEvent::ZombieEvent()
{
    std::srand(time(NULL));
    std::cout << "Let the party begin" << std::endl;
};

ZombieEvent::~ZombieEvent()
{
    std::cout << "Let the party end" << std::endl;
};

void ZombieEvent::setZombieType(std::string z_type)
{
    type = z_type;
    std::cout << "type set to " << z_type << std::endl;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
    return new Zombie(name, type);
}

Zombie *ZombieEvent::randomChump()
{
    name_index = (std::rand() % NAME_SIZE);
    std::string name = name_table[name_index];
    Zombie *zboi = newZombie(name);
    zboi->announce();
    return (zboi);
}