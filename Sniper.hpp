#pragma once
#include "Soldier.hpp"

using namespace::std;

class Sniper: public Soldier{
public:
Sniper(unsigned id):Soldier(id){
    type_t=sniper;
    l=100;
    pow=50;
}
void attack(Soldier& soldiers) override;
};