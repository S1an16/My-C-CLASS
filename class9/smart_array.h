#ifndef SMART_ARRAY
#define SMART_ARRAY

// A {"A", 13, "Blue", "A 产生机"}
// B {"A", 13, "Blue", "B 产生机"}

#include <ostream>

class Smart_Array{ // class
    private :
        int length; // private instance variable
        int* arr;
    public :
		static int NUM_INSTANCE;
		int& operator[](int index); // member function
        int& operator[](double index); // Phishing
		int getItem(int index);
        int setItem(int index, int value);
        int getLength();
        friend std::ostream& operator<<(std::ostream& os, Smart_Array& sa); // friend function
        void printArray(); // {1,2,3,4} -> [1,2,3,4,5]
        ~Smart_Array();
        Smart_Array();
        Smart_Array(int length);
        Smart_Array(int length, int initial_value);
        Smart_Array(Smart_Array& other);
};

class Bad_Array{
public:
    void punishSmart(Smart_Array a){
        // a.length;
    }
};
#endif
