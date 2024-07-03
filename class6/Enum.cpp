//
// Created by Fangyu Li on 7/2/24.
//
#include <iostream>
#include <string>
#include <Enum.h>
using namespace std;

void setValue(Car& car, string name, int price, Engine_Type engine, int seats){
    car. name = name;
    car. price = price;
    car. engine = engine;
    car. seats = seats;
}

int main (){
    Car car [4];
    setValue(car[3], "Li Xiang L6", 200000, Electric, 5);
    car [0] = Car();
    car [0].name = "Ferrari SF 90";
    car [0].price = 580000;
    car [0].engine = Petrol;
    car [0].seats = 2;
    car [1].name = "Tesla Model X";
    car [1].price = 79630;
    car [1].engine = Electric;
    car [1].seats = 5;
    car [2].name = "NIO eT7";
    car [2].price = 59043;
    car [2].engine = Electric;
    car [2].seats = 4;
    for (int i=0; i < 4; i++){
        cout << "Car" << " " << i+1 << ":\t";
        cout << "Name: " << car[i].name << "\t";
        cout << "Price: $" << car[i].price << "\t";
        string EngineType;
        switch (car[i].engine){
            case Engine_Type::Petrol:
                EngineType = "Petrol";
                break;
            case Engine_Type::Diesel:
                EngineType = "Diesel";
                break;
            case Engine_Type::Hybrid:
                EngineType = "Hybrid";
                break;
            case Engine_Type::Electric:
                EngineType = "Electric";
                break;
        }
        cout << "Engine Type: " << EngineType << "\t";
        cout << "Number of Seats: " << car[i].seats << "\t" << endl;
    }
    cout << endl;
}