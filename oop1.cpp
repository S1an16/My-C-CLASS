#include <iostream>
#include "Enum.h"

using namespace std;

typedef struct a{
    //
} name;

class Student{
    private :
        string color_of_underwear;
        int id;
    public :
        string nick_name;
        void change_underwear(string color);
        Car myCockCar;
};

int main(){
    Student a;
    a.id;
    a.nick_name;
    a.myCockCar;
    a.color_of_underwear = "Blue";
}

