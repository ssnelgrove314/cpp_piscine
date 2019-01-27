#ifndef ALIEN_CLASS_HPP
#define ALIEN_CLASS_HPP

#include "GameObject.class.hpp"

#define RIGHT 'r'
#define LEFT 'l'

class Alien : public GameObject {
    bool bombing;
    char direction; //'r' right, 'l' left

    public:
        Alien();
        ~Alien();
        void drop_bomb();
};

#endif
