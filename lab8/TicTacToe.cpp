#include <iostream>

using namespace std;

int user_input(){
    int input;
    cin >> input;
    return input;
}

void mark_array(char my_array[][3]){
    int input;
    do {
        input = user_input();
    } while(input < 1 || input > 9);
    cout << input << endl;
    cout << my_array ;
}

int main()
{
    char my_array[3][3] =  {{'1','2','3'},
                            {'4','5','6'},
                            {'7','8','9'}};

    bool game_over = false;

    cout << my_array[1][1];

    mark_array(my_array);

    return 0;
}