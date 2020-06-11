#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> lotteryNums(10); // initialise size 10

    int lotteryArr[5] = {4, 13, 42, 24, 12};

    cout << lotteryNums.size() << endl;

    // inser the first 3 items of lotteryArr to the beginning of vector
    lotteryNums.insert(lotteryNums.begin(), lotteryArr, lotteryArr+3);
    cout << lotteryNums.at(2) << endl;

    // insert 59 at index 5 of vector
    lotteryNums.insert(lotteryNums.begin()+5, 59);
    cout << lotteryNums.at(5) << endl;

    cout << lotteryNums.size() << endl;

    // push 48 to the end of the vector
    lotteryNums.push_back(48);

    cout << lotteryNums.size() << endl;

    lotteryNums.resize(10);
    cout << lotteryNums.size() << endl;

    // put 69 at the last index of vecotr
    lotteryNums[lotteryNums.size()-1] = 69;
    cout << lotteryNums.at(lotteryNums.size()-1) << endl;

    return 0;
}