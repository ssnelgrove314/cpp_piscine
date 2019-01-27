#ifndef PLAYER_CLASS_HPP
#define PLAYER_CLASS_HPP

#include "GameObject.class.hpp"

class Player : public GameObject {
    bool shooting;
    int shots; //max 3, replenishes every x cycles

    public:
        Player();
        ~Player();
        void shoot(bool);
        void get_inputs();
};

#endif