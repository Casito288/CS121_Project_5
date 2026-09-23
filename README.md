***mermaid

classDiagram

class Horse {
  - int position
  - int index
  - int trackLength
  + Horse()
  + init(int index, int horseLength)
  + andvance()
  + printLane()
  + isWinner() bool
}

class Race {
  - int NUM_HORSES
  - int TRACK_LENGTH
  + Horse horses[]
  + Race()
  + start()
}

Race --> Horse
***

## Race::Race[]
---
const int TRACK_LENGTH
const static int NUM_HORSES

Create an array of horses length NUM_HORSES
Initialize all the horses
for each horse
  initialize that horse with its index and the track length
---

### Race::start[]
---
send random
bool keepGoing
while keepGoing:
  go through each horse;
    advance that horse;
    print that hors's lane;
    if that horsewon;
      set keepGoing to false;
---

### Horse::Horse[]
---
position = 0
index = 0
trackLength = 15
---

## void Horse::init(int index, int trackLength)
---
Horse::index == index
Horse::trackLength = trackLength
Horse::position = 0
---

## void Horse::advance()
---
call random number 0 - 1 int, put in coin
add coin to position -> position
---

## void Horse::printLane()
---
get position of horse
print position of horse in track length
for pos = 0 to trackLength;
  if Horse::position == pos;
    print Horse::index
  otherwise:
    print '-'
print a newLine at the end
---

## bool Horse::isWinner()
---
bool winning = false
if position >= trackLength;
  winning = true
  print some sort of message
return winning
---
