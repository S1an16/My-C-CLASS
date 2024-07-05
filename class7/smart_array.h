#ifndef SMART_ARRAY
#define SMART_ARRAY

// A {"A", 13, "Blue", "A 产生机"}
// B {"A", 13, "Blue", "B 产生机"}

class Smart_Array{
    private :
        int length;
        int* arr;
    public :
        int getItem(int index);
        int setItem(int index, int value);
        int getLength();
        void printArray(); // {1,2,3,4} -> [1,2,3,4,5]
        ~Smart_Array();
        Smart_Array();
        Smart_Array(int length);
        Smart_Array(int length, int initial_value);
        Smart_Array(Smart_Array& other);
};
#endif
