#ifndef GAME_OBJECT_CLASS_HPP
#define GAME_OBJECT_CLASS_HPP

class GameObject {
    int g_row;
    int g_col;
    bool g_alive;
    char g_ch;

    public:
        GameObject(int row, int col, char ch, char alive);
        ~GameObject();
        int *get_loc();
        
};

#endif