#ifndef SIMODEL_HPP
#define SIMODEL_HPP

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
    GameState m_state;
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