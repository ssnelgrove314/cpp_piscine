#include "../inc/SIView.class.hpp"

View::View(const Model &model)
{
   initscr();
   clear();
   noecho();
   cbreak();
   nodelay(stdscr,1);
   keypad(stdscr,1);
   srand(time(NULL));
}

View::View()
{

}

View::~View()
{

}

void View::render()
{
    setModel_moveAll(model);
    refresh();
    sleep(1);
}
