#include <iostream>
#include <cstdlib>
#include <ctime>

#include "race.h"
#include "horse.h"

int main(){
  srand(time(NULL));
  Race r;
  r.start();
  return 0;
}
