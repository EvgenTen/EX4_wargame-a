//#pragma once
#include "FootSoldier.hpp"

using namespace::std;
class FootCommander:public FootSoldier{
public:
FootCommander(unsigned id) : FootSoldier(id){
    type_t =footcommander;
    l=150;
    pow=20;
}
void attack(Soldier& soldiers) override;

};