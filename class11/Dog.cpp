/*************************************************************************
    > File Name: Dog.cpp
    > Author: Wuyudaxia
    > Mail: yuwu_work@163.com 
    > Created Time: Wed Jul 24 04:37:48 2024
 ************************************************************************/

#include<iostream>
#include "Animal.h"

#ifndef DOG
#define DOG
class Dog : public Animal{
	public:
		void bark(){
			std::cout << "Woof!" << std::endl;
		}
		void eat(){
			std::cout << "I need some meat to eat" << std::endl;
		}
		~Dog(){
			std::cout << "Dog Desturctor" << std::endl;
		}
};
#endif
