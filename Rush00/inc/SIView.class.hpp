#ifndef SIVIEW_HPP
#define SIVIEW_HPP

#include "SIModel.class.hpp"
#include <ncurses.h>
#include <unistd.h>

class View
{
public:
    View(const Model &model);
    View();
    ~View();
    //update function
    void setModel_moveAll(const Model &model);
    //paint function
    void render();
private:
    Model model;
};

#endif