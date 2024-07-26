#include<string>

#ifndef GAMER
#define GAMER

#include "People.h"

class Gamer : public People{
    public:
        string best_character;
        string shout_message;
        double win_percent;
        void shout();
        void greeting();
        void game();
};

#endif
