// classes and uniform initialization
#include <iostream>
using namespace std;

class Club {
    string stadiumName;
    int age;
  public:
    void Stadium(string param1) { stadiumName = param1; }
    string getStadium() {return stadiumName;}
};

int main () {
  Club Chelsea;
  Chelsea.Stadium("S. Bridge");
  cout << "Chelsea´s stadium " << Chelsea.getStadium() << '\n';
  return 0;
}