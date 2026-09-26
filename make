horseRace: race.o horse.o main.o
	g++ -g race.o horse.o main.o -o horseRace

main.o: race.h horse.h main.cpp
	g++ -c -g main.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

race.o: race.h horse.h race.cpp
	g++ -c -g race.cpp

clean: 
	rm *.o
	rm horseRace

debug: horseRace
	gdb horseRace

run: horseRace
	./horseRace
