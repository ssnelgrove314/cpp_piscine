#include <ncurses.h>
#include "../inc/GameMaster.class.hpp"
#include "../inc/Player.class.hpp"
#include "../inc/Projectile.class.hpp"
#include "../inc/Alien.class.hpp"

int main(int argc, char const*argv[])
{
    GameMaster master;
    master.execution_loop();
}
