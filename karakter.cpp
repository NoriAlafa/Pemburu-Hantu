#include <iostream>
#include "karakter.h"

int main(){
  int pocong p;
  int kunti k;
  karakter *ch1=&p;
  karakter *ch2=&k;

  ch1->setAttackPower(100);
  ch2->setAttackPower(50);

  p.attack();
  k.attack();
}
