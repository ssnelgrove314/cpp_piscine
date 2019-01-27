#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie
{
    std::string name;
    std::string type;

    public:
        std::string getName();
        Zombie(std::string z_name, std::string z_type);
        ~Zombie();
        void const announce();
};

#endif