//
// Created by Fangyu Li on 7/5/24.
//

#include "smart_array.h"
#include <iostream>

using namespace std;
int main(){
    Smart_Array smartArrayA(5, 58);
    Smart_Array smartArrayB(smartArrayA);
    smartArrayB.setItem(1, 114514);
    smartArrayA.setItem(0,100);
    smartArrayA.printArray();
    smartArrayB.printArray();

}