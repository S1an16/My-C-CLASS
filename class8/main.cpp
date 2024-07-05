//
// Created by Fangyu Li on 7/5/24.
//
#include <iostream>
#include "matrix.h"
using namespace std;
int main (){
    Matrix a1(2,3,3);
    Matrix b1(2, 3, 5);
    a1.printMatrix();
    cout << endl;
    b1.printMatrix();
    cout << endl;
    a1.addMatrix(b1);
    cout << endl;
    a1.printMatrix();
    cout << endl;

}