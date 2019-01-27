#ifndef SIVIEW_HPP
#define SIVIEW_HPP

#include "SIModel.class.hpp"

class View
{
public:
    View(const Model &model);
    View();
    //update function
    void setModel(const Model &model);
    //paint function
    void render();
private:
    Model model;
};

#endif