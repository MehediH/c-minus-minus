#include <iostream>

using namespace std;

int main(){
    string name = "mehedi hassan";

    cout << name << endl;

    name.append(" big woo");

    cout << name << endl;

    name.insert(6, " tester");

    cout << name << endl;

    // start index, length of what to replace, and what to replace with
    name.replace(21, 7, "");

    cout << name << endl;

    // erase from 6th index and delete 7 next ones
    name.erase(6, 7);

    cout << name << endl;

    return 0;
}