#include <iostream>

// using namespace std;

int somethingFun(int temp);

/*
int min(int a, int b){
    if (a > b)
        return b;
    return a;
}

double min(double a, double b){
    //return a > b ? b : a;
    // a > b ?   -> if (a > b)
    // b : a     -> if (a > b), then process and return b
    //           -> else process and return a
    return a > b ? somethingFun(b) : somethingFun(a);
}

int somethingFun(int temp){
    cout << temp << "\t" << temp << endl;
    return temp;
}
*/
template <typename T>
T min(T a, T b){
    return a < b ? a : b;
}

int main(){
    std::cout << min(10,20) << std::endl;

    std::cout << min(10.1, 10.5) << std::endl;

    char a = 'A';
    char b = 'a';
    std::cout << min(a, b) << std::endl;
}
