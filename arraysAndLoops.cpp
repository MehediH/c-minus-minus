#include <iostream>

using namespace std;

int main(){
    int grades[5];

    grades[3] = 20;

    cout << grades[3] << endl;

    grades[3] = 35;

    cout << grades[3] << endl;

    int scores[5] = {5, 9, 13, 24, 26};

    cout << "First score: " << scores[0] << endl;

    char name[5][5] = {{'M', 'E', 'H', 'E', 'D'}, {'I', 'H', 'A', 'S', 'S'}};

    cout << "2nd letter in 2nd array " << name[1][1] << endl;

    name[0][2] = 'E';

    cout << "3rd letter in 1st array " << name[0][2] << endl;

    // for(int i=0; i < 10; i++){
    //     cout << i << endl;
    // }

    cout << "Array size " << sizeof(name) / sizeof(name[0]) << endl;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << name[i][j];
        }

        cout << endl;
    }

    return 0;
}