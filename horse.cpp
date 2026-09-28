#include <iostream>
#include "horse.h"

Horse::Horse(){

  position = 0;
  index = 0;
  trackLength = 15;
}; // end Horse

void Horse::init(int index, int trackLength){

  Horse::index = index;
  Horse::trackLength = trackLength;
  Horse::position = 0;
} // end init

void Horse::advance(){

  int rd = rand() % 2;
  position += rd;
} // end advance

void Horse::printLane(){

  for (int pos = 0; pos < trackLength; pos++){
    if (position == pos) {
      std::cout << index ;
    } else {
      std::cout << '-';
    } // end if
  } // end for
  std::cout << std::endl;

} // end printLane

bool Horse::isWinner(){

  bool winner = false;
  if (position >= trackLength){
  
    winner = true;
    std::cout << "Horse " << index << " wins!!" << std::endl;
  }// end if
  return winner;

} // end isWinner method
