#ifndef SIMODEL_HPP
#define SIMODEL_HPP

#include "GameObject.class.hpp"
#include "Player.class.hpp"
#include "Projectile.class.hpp"
#include "Alien.class.hpp"
#include <string>

enum GameState{
    MAIN_MENU,
    GAME_IN_PROGRESS,
    GAME_ENDED
};

typedef void (*DataChangeHandler)(std::string newData);

class Model
{
    int m_nrows;
    int m_ncols;
    static GameState m_state;
    Player player;
    Alien *aliens;
    Projectile *crossfire;
public:
    Model(int nrows, int ncols);
    Model();
    ~Model();
    void SetData(const std::string &data);
    void RegisterDataChangeHandler(DataChangeHandler handler);
private:
    std::string data;
    DataChangeHandler event;
};

#endif