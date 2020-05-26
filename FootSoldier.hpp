#pragma once
#include "Soldier.hpp"

using namespace::std;

class FootSoldier : public Soldier{
public: 
FootSoldier(unsigned id):Soldier(id){
    type_t=footsoldier;
    l=100;
    pow=10;
}

void attack(Soldier& soldier) override;
};