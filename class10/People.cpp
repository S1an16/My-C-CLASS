#include <iostream>
#include "People.h"

Color People::getUnderwear() {
   return underwear;
}
double People::getMoney(){
    return money;
}
int People::getAge() {
    return age;
}
int People::getID(){
    return id;
}
string People::getName(){
    return name;
}

void People::setUnderwear(Color temp) {
    underwear = temp;
}

void People::setMoney(double temp) {
    money = temp;
}

void People::setAge(int temp) {
    age = temp;
}

People::People() {
    id = TOTAL_PEOPLE;
    name = "People" + id;
    age = 0;
}
People::People(std::string name, int age) {
    TOTAL_PEOPLE++;
    this -> name = name;
    this -> age = age;
}

People::People(std::string name, int age, int id) {
    TOTAL_PEOPLE++;
    this -> name = name;
    this -> age = age;
    this -> id = id;
}

People::~People (){
    TOTAL_PEOPLE--;
}