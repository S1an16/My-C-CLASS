#include <iostream>
#include <string>
using namespace std;

typedef enum{
    L = 100, G = 51, B = 2, T = 1, Q = 10, I = 4, A = 3
} Sex;

// People : Sex; Age; Name;

typedef struct w {
    int age;
    Sex sex;
    int id;
    string name;
} People;

typedef struct f {
    struct f a;
} Family;
void G2L(People* p){
    p -> sex = L;
}

void giveNumber(People arr[]){
    for (int i = 0; i < 20; i++){
        arr[i]->id = i+1;
    }
}

int main(){
    // TraficColor colorCurrent = YELLOW;
    // if(colorCurrent == RED)
    //     doSomething...;
    // if(colorCurrent == 1)
    // else (colorCurrent == 0)
    //cout<<colorCurrent<<endl;
    /* People Cock;
    Cock.age = 18;
    Cock.sex = G;
    Cock.name= "Cock";
    People* p = &Cock;
    G2L(p);
    cout<< Cock.sex << endl;
    */
    People* classes[20];
    giveNumber(classes);
    for(auto i : classes){
        cout << i.id << endl;
    }
}
