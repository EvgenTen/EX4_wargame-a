#pragma once
#include "Soldier.hpp"

using namespace::std;
class Paramedic: public Soldier{
public:
    Paramedic(unsigned id):Soldier(id){
    type_t=paramedic;
    l=100;
    pow=100;
}
void attack(Soldier& soldiers) override;
};