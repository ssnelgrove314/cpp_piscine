#ifndef PONY_H
#define PONY_H

#include <string>
#include <iostream>

class Pony {
    std::string name;
    std::string color;
    int age;
    int weight;
    int height;

    public:
        Pony(std::string pname, std::string pcolor, int page, int pweight, int pheight);
        ~Pony();
        void printPony();
};

#endif