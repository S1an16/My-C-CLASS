#include "smart_array.h"
#include <iostream>
#include <exception>
using namespace std;
template<class T>
T Smart_Array::NUM_INSTANCE = 0;

Smart_Array::Smart_Array(){
	NUM_INSTANCE ++;
	arr = new T [10];
    length = 10;
}

Smart_Array::Smart_Array(int length){
    if (length <= 0){
        throw out_of_range ("You entered a wrong length");
    }
    NUM_INSTANCE ++;
	this->length = length;
    arr = new int[length];
}

Smart_Array::Smart_Array(int length, T value) {
    if (length <= 0){
        throw out_of_range ("You entered a wrong length");
    }
    NUM_INSTANCE ++;
	this->length = length;
    arr = new int [length];
    for (int i = 0; i < length; i++){
        arr[i] = value;
    }

}
int Smart_Array::getItem(int index){
	if(index >= length){
		cout << "You stupid ! Index out of bound !" << endl;
		return -114514;
	}
	return arr[index];
}
int& Smart_Array::operator[](int index) {
    if(index >= length || index < 0)
		throw out_of_range("You entered a wrong index!");
	return arr[index];
}

int& Smart_Array::operator[](double index) {
	throw out_of_range("You entered a wrong datatype!");
}
int Smart_Array::setItem(int index, T value){
    if (index >= length || index < 0){
        throw out_of_range("You entered a wrong index!");
    }
    int temp = arr[index];
    arr[index] = value;
    return temp ;
}

int Smart_Array::getLength(){
    return length;
}

Smart_Array::~Smart_Array(){
    delete []arr;
    NUM_INSTANCE--;
}

void Smart_Array::printArray (){
    cout << "[";
    for (int i = 0; i < length; i++){
        cout << arr[i];
        if(i != length-1){
            cout << ",";
        }
    }
    cout << "]" << endl;
}

ostream& operator << (ostream& os, Smart_Array& sa){
    os << "[";
    for (int i = 0; i < sa.length; i++){
        os << sa.arr[i];
        if(i != sa.length-1){
            os << ",";
        }
    }
    os << "]" ;
    return os;
}


Smart_Array::Smart_Array(Smart_Array& other) {
    NUM_INSTANCE++;
    this->length = other.length;
    arr = new int [length];
    for (int i = 0; i < length; i++){
        arr[i] = other.getItem(i);
    }
}
