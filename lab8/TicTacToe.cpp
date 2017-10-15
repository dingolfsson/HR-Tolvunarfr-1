#include <iostream>

using namespace std;

// Virkar
int user_input(){
    int input = 0;

    while (input < 1 || input > 9) {
        cin >> input;
        if (input < 1 || input > 9) {
            cout << "Out of range!" << endl;
        }
    }
    
    return input;
}

// Tarf ad laga
void mark_array(char my_array[][3], bool players){
    int inp = user_input();

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i * 2 + i + j == inp) {
                if (my_array[i][j] == 'Y' || my_array[i][j] == 'X') {
                    cout << "ILLEGAL MOVE" << endl;
                } else if (players) {
                    my_array[i][j] = 'X';
                    return;
                } else {
                    my_array[i][j] = 'O';
                    return;
                }
            }
        }
    }
}

// Eftir ad gera
bool checkWinner(char my_array[][3]) {

    return false;
}

// Virkar
void printTicTac(char arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    bool players = true;

    char my_array[3][3] = {{'1','2','3'},
                           {'4','5','6'},
                           {'7','8','9'}};

    // A medan true (basically alltaf)
    // Kalla a mark_array (sem kallar a input)
    // Prenta TicTacid
    // EF tad er winner, haetta while lykkjunni
    // Ef enginn vinnar, 'toggle' a milli X og O
    // Player True => X, Player False => O
    while (true) {
        mark_array(my_array, players);
        printTicTac(my_array);
        if (checkWinner) return;
        players = !players;
    }

    return 0;
}