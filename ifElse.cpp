#include <iostream>

using namespace std;

int main(){
    int future = 1;
    int travis = 2;
    int kanye = 3;

    if ((future + travis) > kanye){
        cout << "future and trav" << endl;
    } else if ((kanye > future) && (kanye > travis)){
        cout << "kanye goated" << endl;
    } else{
        cout << "goats" << endl;
    }

    int is2020bad = 35;

    switch (is2020bad){
        case 1:
            cout << "yes" << endl;
            break;
        case 2:
            cout << "yes very" << endl;
            break;
        case 3:
            cout << "incredibly bad" << endl;
            break;
        default:
            cout << "dude" << endl;
    }

    int travPlatinums = 2;
    int kanyePlatinums = 5;

    int isKanyeGoat = (kanyePlatinums > travPlatinums) ? true : false;

    cout << "is kanye goat? " << (isKanyeGoat ? "yes" : "not really") << endl;

    return 0;
}