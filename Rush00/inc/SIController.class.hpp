#ifndef SICONTROLLER_HPP
#define SICONTROLLER_HPP

#include "SIView.class.hpp"
#include "SIModel.class.hpp"

class Controller
{
public:
    Controller(const Model &model, const View &view);
    Controller();
    ~Controller();
    void setModel(const Model &model);
    void setView(const View &view);
    //when app starts. Init stuff
    void initGame();
    void startGame();
    void stopGame();
    void endGame();
    void gotoMainMenu();
private:
    Model model;
    View view;
};

#endif