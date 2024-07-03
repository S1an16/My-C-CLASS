#include "smart_array.h"
#include <iostream>

using namespace std;

Smart_Array::Smart_Array(){
    arr = new int[10];
    length = 10;
}

Smart_Array::Smart_Array(int length){
    this.length = length;
    arr = new int[length];
}

int Smart_Array::getItem(){

}

int Smart_Array::setItem(){

}

int Smart_Array::getLength(){
    
}

~Smart_Array::Smart_Array(){
    delete arr;
}
