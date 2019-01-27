#include "../inc/GameMaster.class.hpp"


GameMaster::GameMaster()
{
    this->initialize_game();
    this->execution_loop();
}

GameMaster::~GameMaster()
{

}

void GameMaster::initialize_game()
{

}

void GameMaster::execution_loop()
{
    while (420)
    {
        std::cout << "okay" << std::endl;
        sleep(1);
    }
}