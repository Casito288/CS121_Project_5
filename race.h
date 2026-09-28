#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>
#include <string>
#include "horse.h"

class Race {

  private:
    const static int NUM_HORSES = 5;
    const static int  TRACK_LENGTH = 15;
    Horse horses[NUM_HORSES];
  public:
    Race();
    void start();

};

#endif
