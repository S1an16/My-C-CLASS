/*************************************************************************
    > File Name: main.cpp
    > Author: Wuyudaxia
    > Mail: yuwu_work@163.com 
    > Created Time: Wed Jul 24 04:41:16 2024
 ************************************************************************/

#include<iostream>
#include "Animal.h"
#include "Dog.cpp"
#include "British_Dog.cpp"
using namespace std;


void Animal::bark(){}

void AnimalFun(Animal& animal){
	cout << "Welcome to Animal Fun ! You can eat once for free !" << endl;
    animal.eat();
	delete &animal;
}

void DogFun(Dog& dog){
	dog.bark();
}

int main(){
//	Animal animal;

//	Dog dog;

//	dog.bark();
//	dog.eat();

//	British_Dog dog1;
//	dog1.bark();
//  dog1.drink_eat();
	while(1){
	Animal* dog2 = new British_Dog;
	AnimalFun(*dog2);
	}
	//	dog2->drink_eat();

//	dog1.bark();
//	dog1.eat();

//	animal.bark();
//	animal.eat();
	return 0;
}
