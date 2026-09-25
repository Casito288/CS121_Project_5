#include <iostream>
#include <string>
#include <random>
#include <ctime>

class Horse {

  private:
    int position, index, trackLength;
  public:
    Horse();
    void init(int index, int trackLength);
    void advance();
    void printLane();
    bool isWinner();

};
