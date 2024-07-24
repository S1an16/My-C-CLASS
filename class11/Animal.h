/*************************************************************************
    > File Name: Animal.cpp
    > Author: Wuyudaxia
    > Mail: yuwu_work@163.com 
    > Created Time: Wed Jul 24 04:35:10 2024
 ************************************************************************/

#include<iostream>

using namespace std;

#ifndef ANIMAL
#define ANIMAL
class Animal{
	
	public:
		int legs;
		virtual void bark() = 0;
		virtual void eat(){}
		virtual	~Animal(){
			cout << "Animal Destructor" << endl;
		}
};


#endif
