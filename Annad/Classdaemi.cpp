#include <iostream>
#include "Club.h"
using namespace std;

int main () {

  Club Chelsea;
  Chelsea.setStadiumValues("S. Bridge", 114);
  cout << "Chelsea Stadium Name: " << Chelsea.getStadiumName() << endl;
  cout << "Chelsea Clubs Age: " << Chelsea.getStadiumAge() << endl;

  Club United;
  United.setStadiumValues("Old Trafford", 142);
  cout << "Uniteds Stadium Name: " << United.getStadiumName() << endl;
  cout << "Uniteds Clubs Age: " << United.getStadiumAge() << endl;
  return 0;
}