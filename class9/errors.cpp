/*************************************************************************
    > File Name: errors.cpp
    > Author: Wuyudaxia
    > Mail: yuwu_work@163.com 
    > Created Time: Mon Jul  8 05:22:42 2024
 ************************************************************************/

#include<iostream>

using namespace std;

int main(){ 
	cout << " Give me a number and I will give your it's recip\' ";
	int num;
	cin >> num;
	
	
	try{
	cout << "Your number is "<< 1/num << endl;
	}
	catch(int e){
	cout << cerr << endl;	
	}
}
