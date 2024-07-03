//
// Created by Fangyu Li on 7/3/24.
//
#include <iostream>
#include <string>
#include "Enum.h"

using namespace std;

void setValue(Car& car, string name, int price, Engine_Type engine, int seats){
    car. name = name;
    car. price = price;
    car. engine = engine;
    car. seats = seats;
}
void changeSEATS(Car& car, int tep){
    car.seats = tep;
}

int main () {
    cout << "Please type in the name of your car, the estimated price, and the engine type(1 stands for balba): " << endl;
    Car car;
    string name; int price; int engine;
    cin >> name >> price >> engine;
    Engine_Type real_engine;
    switch (engine) {
        case 1:
            real_engine = Petrol;
            break;
        case 2:
            real_engine = Diesel;
        case 3:
            real_engine = Hybrid;
        case 4:
            real_engine = Electric;
    }
    setValue(car, name, price, real_engine, 5);
    int seats;
    cout << "What new seats do you want?";
    cin >> seats;
    changeSEATS(car, seats + car.seats);
    cout << "Your new car" << car.name << " now have " << car.seats << endl;
}