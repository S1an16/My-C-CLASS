#include <iostream>
#include "People.h"
#include "Gamer.h"
using namespace std;

void testPolymorphism(People& people){
    people.greeting();
//  people.game() error!
}

int main(){
    People people;
    Gamer gamer;

    people.greeting();
    gamer.greeting();

    gamer.game();
    // people.gae() error!


    testPolymorphism(people);
    testPolymorphism(gamer);
    return 0;
}
