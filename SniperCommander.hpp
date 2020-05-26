#pragma once
#include "Sniper.hpp"

using namespace::std;

class SniperCommander : public Sniper{

public:
SniperCommander(unsigned &id):Sniper(id){
    type_t=snipercommander;
    l=120;
    pow=100;
}
void attack(Soldier& soldiers) override;
};