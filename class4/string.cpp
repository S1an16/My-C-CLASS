#include <iostream>
#include "string.h"

using namespace std;

void String::printString(const char* arr, int length){
    for(int i = 0; i < length; i ++){
        cout<<arr[i];
    }
    cout<<endl;
}

