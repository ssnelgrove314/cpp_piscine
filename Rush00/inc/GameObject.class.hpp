#ifndef GAME_OBJECT_CLASS_HPP
#define GAME_OBJECT_CLASS_HPP

struct t_coord
{
    int x;
    int y;
}; 
class GameObject {
    bool g_alive;
    char g_ch;
    t_coord &loc;

    public:
        GameObject(int row, int col, char ch, char alive);
        ~GameObject();
        t_coord &get_loc();
};

#endif