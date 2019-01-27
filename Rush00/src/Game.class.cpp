#include "../inc/Game.class.hpp"

GameMaster::GameMaster()
{
    this->initialize_game();
    this->run();
    this->close();
}

GameMaster::~GameMaster()
{
    this->close();
}

int GameMaster::initialize_game(void)
{
    win = initscr();
    cbreak();
    noecho();
    clear();
    refresh();
    this->playah = new Player();

    return (0);
}

void GameMaster::run(void)
{
    while (420)
    {

        refresh();
    }
}

void GameMaster::close(void)
{
    endwin();
}
