#include<iostream>
#include "LinkList.h"

using namespace std;

template <typename T>
void printList(Node<T>* node){
    while(node != nullptr){
        cout << node->value << " ";
        node = node->next;
    }
    cout << endl;
}

// ??????
// if(node->next != nullptr)
// printList(node->next)

int main(){
    Node<int>* node0 = new Node<int>;
    Node<int>* node1 = new Node<int>;
    Node<int>* node2 = new Node<int>;
    
    node0->value = 10;
    node0->next = node1;

    node1->value = 20;
    node1->next = node2;

    node2->value = 30;
    node2->next = nullptr;

    printList(node0);
}
