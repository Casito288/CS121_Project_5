#include <iostream>
#include "race.h"

/*class Race {

  private:
    int NUM_HORSES;
    int TRACK_LENGTH;
  public:
    Horse horses[];
    Race();
    start()
} // end Race class constructor??*/

Race::Race(){

  //const int TRACK_LENGTH = 15;
  //const static int NUM_HORSES = 5;

  horses[] = {0, 0, 0, 0, 0};

  for(int i = 0; i <= NUM_HORSES; i++){
  
    i += horses[i];
  } // end for loop
}; // end Race constructor method??

void Race::start(){

  srand(time(NULL));
  bool keepGoing = true;
  while (keepGoing){

    std::cout << "Press enter to flip the coin: " << std::endl;
    std::cin.get();
  
    for (int hn = 0; hn <= NUM_HORSES - 1; hn++){
    
      advance(hn, horses);
      printLane(hn, horses);
      
      if (isWinner(hn, horses) == false){
      
        std::cout << "Horse " << hn << " has won!!" << std::endl;
	keepGoing = false;
      } // end if statement
    } // end for loop
  } // end while loop
} // end start method
