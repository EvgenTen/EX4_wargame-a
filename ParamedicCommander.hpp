#pragma once
#include "Paramedic.hpp"

using namespace std;
class ParamedicCommander: public Paramedic{
public:
ParamedicCommander(unsigned &id):Paramedic(id){
    type_t=paramediccomander;
    l=100;
    pow=10;
}
void attack(Soldier& soldiers) override;
};