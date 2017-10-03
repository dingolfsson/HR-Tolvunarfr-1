#include <iostream>
#include <math.h>

using namespace std;

bool deiling(int x, int y, int& kvoti, int& afgangur);

int main () {

    int x, y, kvoti, afgangur;
    cin >> x >> y;

    bool gengur_upp = deiling(x, y, kvoti, afgangur);

    cout << x << " " << y << " " << kvoti << " " << afgangur << "\n"; 

    return 0;

}

bool deiling(int x, int y, int& kvoti, int& afgangur) {
    int count = 0;
    int tmpX = x;
    int tmpY = y;
    while (tmpY < tmpX) {
        count++;
        tmpX -= tmpY;
    }
    kvoti = count;
    afgangur = x % y;
    return x % y == 0;
}