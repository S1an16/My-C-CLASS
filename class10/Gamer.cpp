/*************************************************************************
    > File Name: Gamer.cpp
    > Author: Wuyudaxia
    > Mail: yuwu_work@163.com 
    > Created Time: Wed Jul 10 05:43:56 2024
 ************************************************************************/

#include<iostream>
#include "Gamer.h"
#include "People.h"

// Gamer::Gamer(){
// }
Gamer::Gamer(std::string best_char, double win_per, std::string name, int age, int id) {
    Gamer::best_character = best_char;
    Gamer::win_percent = win_per;
}
void Gamer::shout() {
    cout<< shout_message;
}