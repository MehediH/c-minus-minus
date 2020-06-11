#include <iostream>

using namespace std;

int main(){
    string numberGuessed;
    int intNumberGuessed = 0;

    // keep asking for input till they enter 4;
    do {
        cout << "Guess number between 1 and 10: ";

        // source of input and where it's stored
        getline(cin, numberGuessed);

        // stoi converts string to int, stod for string to double
        intNumberGuessed = stoi(numberGuessed);

        cout << intNumberGuessed << endl;

    } while (intNumberGuessed != 4);

    cout << "You win" << endl;

    return 0;
}