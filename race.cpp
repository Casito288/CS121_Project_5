#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
  for(int i = 0; i <= NUM_HORSES; i++){
    horses[i].init(i, TRACK_LENGTH);
  } // end for
}; // end Race

void Race::start(){

  bool keepGoing = true;
  while (keepGoing){

    std::cout << "Press enter to flip the coin: " << std::endl;
    std::cin.get();
  
    for (int hn = 0; hn <= NUM_HORSES - 1; hn++){
    
      horses[hn].advance();
      horses[hn].printLane();
      if (horses[hn].isWinner()){
        //std::cout << "Horse " << hn << " has won!!" << std::endl;
	keepGoing = false;
      } // end if
      } //end for
      std::cout << "Pres enter for next round";
      std::cin.ignore();
    } // end while
  } // end start

