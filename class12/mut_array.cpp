#include <iostream>
using namespace std;

template <class T>
class mutArray{
    private:
        unsigned int length; //  0    0     0     0
                             // 2^3 + 2^2 + 2^1 + 2^0
                             // unsigned
                             // [0, 15]
                             //  0    1     1     0    -> 6
                             //  1    1     1     1    -> 15
                             //
                             //  0    1     1     1    -> + 7
                             // (+)                    ->
                             //  1    1     1     1    -> - 7
                             //  0    0     0     0    -> + 0
                             //  1    0     0     0    -> - 0

                             //  1    1     0     0    -> - 8 + 2^2 -> -4
                             //  1    1     1     1    -> - 8 + 2^2 + 2^1 + 2^0 -> -1
                             //  0    0     0     0    -> 0
                             //  [-8, 7]
                             //  two's complement

                             // 4 3 2 1
                             // 1 * 10^0 + 2 * 10 ^ 1 + 3 * 10 ^ 2 + 4 * 10 ^3
        T* arr;
        unsigned int temp_length;
    
    public:

        mutArray(unsigned int length){
            arr = new T[length];
            this->length = length;
            temp_length = 0;
        }

        void setItem(T item, unsigned int index){
            arr[index] = item;
        }

        void addItem(T item){
            if(temp_length > length)
            {
                T temp_array = new T[length + 10];
                for (int i = 0; i < length; i++)
                    temp_array[i] = arr[i];
                delete[] arr;
                arr = temp_array;
                length += 10;
                temp_length ++;
                arr[temp_length - 1] = item;
            }
            temp_length ++;
            arr[temp_length] = item;
        }
        T getItem(unsigned int index){
            return arr[index];
        }
        unsigned int getLength(){
            return length;
        }
};

//int main(){
//    mutArray a;
//    a.length = 10;
//}
