#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
    ZombieEvent ev = ZombieEvent();
    ev.setZombieType("normal");
    Zombie *first = ev.newZombie("Zef");
    first->announce();

    ev.setZombieType("toxic");
    Zombie *rand1 = ev.randomChump();
    Zombie *rand2 = ev.randomChump();
    Zombie *rand3 = ev.randomChump();
    Zombie *rand4 = ev.randomChump();
    ev.setZombieType("Executive");
    Zombie *rand5 = ev.randomChump();

    delete first;
    delete rand1;
    delete rand2;
    delete rand3;
    delete rand4;
    delete rand5;
    return 0;
}
