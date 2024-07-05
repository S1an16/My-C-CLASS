#include <iostream>

using namespace std;

class Matrix{
    
    private:
        int** arr;
        int row;
        int col;
    
    public:

        // Rubic : A default constructor that initalize the `arr` and let every value inside to be 0
        Matrix(int row, int col);
        
        // Rubic : A parametered constructor that initlize the `arr` and set every value to be `value`
        Matrix(int row, int col, int value);

        ~Matrix();

        void printMatrix();

        int getValue(int row, int col);

        void addMatrix(Matrix& B);

        void operator+(Matrix& B);
};
