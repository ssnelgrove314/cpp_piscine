#ifndef SIVIEW_HPP
#define SIVIEW_HPP

#include "SIModel.class.hpp"
#include <ncurses.h>

class View
{
public:
    View(const Model &model);
    View();
    ~View();
    //update function
    void setModel(const Model &model);
    //paint function
    void render();
private:
    Model model;
};

#endif