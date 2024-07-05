#include <iostream>
#include "matrix.h"

using namespace std;
Matrix::Matrix(int row, int col){
    this->row = row;
    this->col = col;
    arr = new int*[row];
    for (int i = 0; i < row; i++){
        arr[i] = new int[col];
    }
}
Matrix::Matrix(int row, int col, int value) {
    this -> row = row;
    this -> col = col;
    arr = new int*[row];
    for (int i = 0; i < row; i++){
        arr [i] = new int [col];
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            arr [i][j] = value;
        }
    }
}
// [1,2] [3,4]
// 1 2 4 5
// 3 4
void Matrix::printMatrix() {
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << getValue(i,j)<< "\t";
        }
        cout << endl;
    }
}

void Matrix::addMatrix(Matrix &B) {
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            arr[i][j] += B.getValue(i, j);
        }
    }
}

void Matrix::operator+(Matrix &B){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            arr[i][j] += B.getValue(i, j);
        }
    }
}

int Matrix::getValue(int row, int col) {
    return arr[row][col];
}
Matrix::~Matrix(){
    for (int i = 0; i < row; i++){
        delete[] arr[i];
    }
    delete[] arr;
    // 1 2 3 4
    // 2 3 4 5

}


