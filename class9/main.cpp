//
// Created by Fangyu Li on 7/5/24.
//

#include "smart_array.h"
#include <iostream>
#include <exception>
#include <ostream>
using namespace std;


	//Smart_Array::NUM_INSTANCE = 0;
int main(){
	Smart_Array* smartArrayA = new Smart_Array(1, 58);

    Smart_Array smartArrayB(*smartArrayA);
    cout<<Smart_Array::NUM_INSTANCE<<endl;

    delete smartArrayA;

    cout<<Smart_Array::NUM_INSTANCE<<endl;
    // smartArrayB[0] = 114514;

	// cout << smartArrayB << endl;

	// Instance smart_arrayA
    // Class Smart_Array
    /*
		try{cout << smartArrayA[1.11] << endl;
	}
	catch(exception& e){
	cout<<e.what()<<endl;
	}
	*/
	return 0;
}
