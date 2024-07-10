#include<string>

#ifndef gamer
#define gamer

#include "People.h"

class Gamer : public People{
    public:
        string best_character;
        double win_percent;
        Gamer(string best_char, double win_per, string name, int age, int id){
            People(name, age, id);
            best_character = best_char;
            win_percent = win_per;
            
        }
};

#endif
