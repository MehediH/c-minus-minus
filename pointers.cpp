#include <iostream>

using namespace std;

void pointerPassing(int *age){
    cout << "I used to be " << *age << endl;
    *age = 22;
}

void referencePassing(int &age){
    age = 39;
}

int main(){
    int age = 69;
    int *agePtr = &age;

    cout << "Address of ptr " << agePtr << endl;
    cout << "Value at address " << *agePtr << endl;

    int nums[5] = {6, 9, 11, 24, 22};
    int *arrPtr = nums;

    cout << "first item addr " << arrPtr << " value: " << *arrPtr << endl;

    arrPtr++;

    cout << "2nd item addr " << arrPtr << " value: " << *arrPtr << endl;

    pointerPassing(&age); // pass by pointer/reference, updates the value of age in memory inside the function

    cout << "updated from function " << age << endl;

    // reference is essentially stuck with a variable
    // pointer can be assigned to diff ones
    int &ageRef = age;
    cout << "age : " << age << endl;
    ageRef++;
    cout << "age : " << age << endl;

    referencePassing(ageRef);

    cout << "age : " << age << endl;

    return 0;
}