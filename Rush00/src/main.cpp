#include <ncurses.h>
#include "../inc/GameMaster.class.hpp"
#include "../inc/Player.class.hpp"
#include "../inc/Projectile.class.hpp"
#include "../inc/Alien.class.hpp"

int main(int argc, char const*argv[])
{
    GameMaster master;
    master.initialize_game();
    master.execution_loop();
}
