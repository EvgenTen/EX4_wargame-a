#pragma once
#include<iostream>
enum type{footsoldier,footcommander,sniper,snipercommander,paramedic,paramediccomander};
using namespace std;

class Soldier{
protected:
 int id;
 type type_t;
 int l;
 uint pow;

public:
  Soldier(unsigned id){
      id=id;
  }
  bool alive()const{
      return this->l>0;
  }
 virtual void attack(Soldier& soldiers)=0;
};