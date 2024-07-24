/*************************************************************************
    > File Name: British_Dog.cpp
    > Author: Wuyudaxia
    > Mail: yuwu_work@163.com 
    > Created Time: Wed Jul 24 04:47:06 2024
 ************************************************************************/

#include<iostream>

#include "Dog.cpp"

class British_Dog : public Dog{
	public :
	// override his super class (not overload)
	void bark(){
		std::cout << "Woofy Woofy~" << std::endl;
    }

	void eat(){
		std::cout << "Could you please give me some water and british fish ?" << std::endl;	
	}

	void drink_eat(){
		std::cout << "TEAAAAA GOOOOD!" << endl;
	}
	~British_Dog(){
		std::cout << "British_Dog Destructor" << std::endl;
	};
};
