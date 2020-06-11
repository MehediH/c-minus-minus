#include <iostream>

using namespace std;

int addNums(int firstNum, int secNum=0){
    return firstNum + secNum;
}

// overload example, params need to be different
int addNums(int firstNum, int secNum, int thirdNum){    
    return firstNum + secNum + thirdNum;
}

// recursion
int getFact(int number){
    int sum;

    if(number == 1) sum = 1;
    else sum = getFact(number - 1) * number;

    return sum;
}

int main() {
    cout << addNums(1) << endl;
    cout << addNums(1, 5, 6) << endl;
    cout << addNums(1, 2) << endl;

    cout << getFact(3) << endl;

    return 0;
}