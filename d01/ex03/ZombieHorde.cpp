#include "ZombieHorde.hpp"
#include <string>
#include <iostream>

const std::string ZombieHorde::nameTable[NAME_SIZE] =
{
    "zzarbb", "Zzzzack", "Zeefezz", "ZzzzzzZzzz", "ZomZang"
};

const std::string ZombieHorde::typeTable[TYPE_SIZE] =
{
    "Executive", "Toxic", "Friendly", "Rotting", "Normal"
};

ZombieHorde::ZombieHorde(const int hordeSize) :
hordeSize(hordeSize)
{
    srand(time(NULL));
    horde = new Zombie *[hordeSize];
    for (int i = 0; i < hordeSize; i++)
        horde[i] = new Zombie(nameTable[std::rand() % NAME_SIZE], typeTable[std::rand() % TYPE_SIZE]);
}

ZombieHorde::~ZombieHorde()
{
    for (int i = 0; i < hordeSize - 1; i++)
        std::cout << horde[i]->getName() << " has been burried." << std::endl;
    for (int i = 0; i < hordeSize - 1; i++)
        delete horde[i];
}

void ZombieHorde::announce()
{
    for (int i = 0; i < hordeSize; i++)
        horde[i]->announce();
}