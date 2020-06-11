#include <iostream>

using namespace std;

int main(){
    // basic while loops
    int i = 0;
    while(i < 25){
        if(i != 24){
            cout << i << ", ";
        } else{
            cout << i << ".";
        }

        i++;
    }

    cout << endl;


    // random numbers between 0-99;
    int randNum = (rand() % 100); 

    while(randNum != 99){
        cout << randNum << ", ";

        randNum = (rand() % 100);
    }

    cout << endl;

    return 0;
}