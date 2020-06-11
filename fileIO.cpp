#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream writer("testing.txt");
    string fileInput = "hello darkness my old friend";

    if (!writer){
        cout << "Error opening file" << endl;
        return -1; // error hapepend;
    } else{
        writer << fileInput << endl;
        writer.close();
    }

    ofstream writer2("testing.txt", ios::app);

    if (!writer2){
        cout << "Error opening file" << endl;
        return -1; // error hapepend;
    } else{
        writer2 << "\n i've come to talk with u again" << endl;
        writer2.close();
    }

    char letter;

    ifstream reader("testing.txt");

    if(!reader){
        cout << "Error opening file" << endl;
        return -1; //error happened
    } else{
        for(int i = 0; !reader.eof(); i++){
            reader.get(letter);
            cout << letter;
        }

        cout << endl;
        reader.close();
    }
}