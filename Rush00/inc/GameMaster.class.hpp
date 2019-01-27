#ifndef GAME_HPP
#define GAME_HPP

#include <ncurses.h>
#include <iostream>
#include <unistd.h>
#include "Alien.class.hpp"
#include "GameObject.class.hpp"
#include "Player.class.hpp"
#include "Projectile.class.hpp"

#define HEIGHT 1000
#define WIDTH 1000
#define MAX_NUM_ALIENS 20
#define MAX_NUM_PROJECTILES 1000

class GameMaster {

public:
    void initialize_game();
    void execution_loop();
    GameMaster();
    ~GameMaster();
};


#endif