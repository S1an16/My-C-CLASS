#include <string>

#ifndef PEOPLE
#define PEOPLE


using namespace std;

typedef enum color{
    White = 0,
    Black = 1,
    Red = 2,
    Blue = 3,
    Pink = 4,
} Color;

class People{
    private:
        Color underwear;
        double money;
        int age;
        int id;
        string name;
    public:
        Color getUnderwear();
        double getMoney();
        int getAge();
        int getID();
        string getName();
        
  //      static int TOTAL_PEOPLE;

        void setUnderwear(Color temp);
        void setMoney(double temp);
        void setAge(int temp);
        virtual void greeting();
        People();
        People(string name, int age);
        People(string name, int age, int id);
        ~People();
};


#endif // !DEBUG
