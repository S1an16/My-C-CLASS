#include <iostream>
#include "sort.h"

using namespace std;

// What is sorting ?
// Take some operation on a array or list, and make it into some specific order
// [1,6,3,8,9,2] -> [1,2,3,6,8,9]

// Good Tools 1 : Get the min value of a array
// Good Tools 2 : Remove a value from a selection list

// [100,0] -> [0,100]
// [0] [100]

// 1. Create a new array
// 2. Get the min value from the old array
// 3. Insert the value into the array
// 4. Delete that value
// 5. Repeat from 2 - 5, until there is no value left in the old array

int get_min(int* array){
    int temp = 0;
    for(int i = 1; i < 5; i++)
        if(array[temp] > array[i])
            temp = i;
    return temp;
}

void delete_value(int* arr, int temp){
    arr[temp] = 11111111111111;
}

int* wsort(int* array){
    int* new_array = new int[5];
    for(int i = 0; i < 5; i ++){
        auto temp = get_min(array);
        new_array[i] = array[temp];
        delete_value(array,temp);
    }
    return new_array;
}

int main(){
    int array[] = {521,42232,31,23231,-11};
    int* arr = wsort(array);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}
