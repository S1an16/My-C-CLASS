//
// Created by Fangyu Li on 7/5/24.
//

#include "smart_array.h"
#include <iostream>

#include <ostream>
using namespace std;


int main(){
    Smart_Array smartArrayA(5, 58);
    Smart_Array smartArrayB(smartArrayA);
    smartArrayB.setItem(1, 114514);
    smartArrayA.setItem(0,100);
    // Instance smart_arrayA
    // Class Smart_Array
    cout << "My Smart Array is : " << smartArrayA << endl;


}