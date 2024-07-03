//
// Created by Fangyu Li on 7/3/24.
//

#ifndef MY_C_CLASS_ENUM_H
#define MY_C_CLASS_ENUM_H

using namespace std;
typedef enum Engine_Type{
    Petrol,
    Diesel,
    Hybrid,
    Electric
} Engine_Type;

typedef struct cars {
    string name;
    double price;
    Engine_Type engine;
    int seats;
} Car;

#endif //MY_C_CLASS_ENUM_H
