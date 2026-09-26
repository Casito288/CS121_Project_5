#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>
#include <string>

class Race {

  private:
    const static int NUM_HORSES = 5;
    const static int  TRACK_LENGTH = 15;
  public:
    int horses[NUM_HORSES];
    Race();
    void start();

};

#endif
