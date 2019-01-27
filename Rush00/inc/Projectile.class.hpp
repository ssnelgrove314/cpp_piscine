#ifndef PROJECTILE_CLASS_HPP
#define PROJECTILE_CLASS_HPP

#include "GameObject.class.hpp"

#define UP 'u'
#define DOWN 'd'

class Projectile : public GameObject {
    char up_or_down; // 'u' for up, 'd' for down;

    public:
        Projectile();
        ~Projectile();
};
#endif