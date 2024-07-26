#include <iostream>
#include <vector>

using namespace std;

int main(){
//    int a[5];
    vector<int> vec;
    // 0 1 2 3 4 5
    // 0 1 2 3 4 5 6
    vec.push_back(0);
    vec.push_back(10);
    vec.push_back(100);
    vec.push_back(1000);
    vec.push_back(10000);
    vec.push_back(100000);
    vec[5] = 114514;
    for(int temp : vec)
        cout << temp << " ";
    cout << endl;
}
