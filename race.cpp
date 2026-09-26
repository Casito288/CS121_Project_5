#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){

  int horses[] = {0, 0, 0, 0, 0};

  for(int i = 0; i <= NUM_HORSES; i++){
  
    i += horses[i];
  } // end for loop
}; // end Race constructor method??

void Race::start(){

  Horse h;

  srand(time(NULL)); // syncing time
  bool keepGoing = true;
  while (keepGoing){

    std::cout << "Press enter to flip the coin: " << std::endl;
    std::cin.get();
  
    for (int hn = 0; hn <= NUM_HORSES - 1; hn++){
    
      h.advance();
      h.printLane();
      
      if (h.isWinner() == false){
      
        std::cout << "Horse " << hn << " has won!!" << std::endl;
	keepGoing = false;
      } // end if statement
    } // end for loop
  } // end while loop
} // end start method
