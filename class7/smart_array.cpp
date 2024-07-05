#include "smart_array.h"
#include <iostream>

using namespace std;

Smart_Array::Smart_Array(){
    arr = new int[10];
    length = 10;
}

Smart_Array::Smart_Array(int length){
    this->length = length;
    arr = new int[length];
}
Smart_Array::Smart_Array(int length, int value) {
    this->length = length;
    arr = new int [length];
    for (int i = 0; i < length; i++){
        arr[i] = value;
    }

}
int Smart_Array::getItem(int index){
    return arr[index];
}

int Smart_Array::setItem(int index, int value){
    int temp = arr[index];
    arr[index] = value;
    return temp ;
}

int Smart_Array::getLength(){
    return length;
}

Smart_Array::~Smart_Array(){
    delete arr;
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

Smart_Array::Smart_Array(Smart_Array& other) {
    this->length = other.length;
    arr = new int [length];
    for (int i = 0; i < length; i++){
        arr[i] = other.getItem(i);
    }
}
