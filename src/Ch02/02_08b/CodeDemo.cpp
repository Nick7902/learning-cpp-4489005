// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
using namespace std;

int main(){
    const size_t AGE_LENGTH = 4;
    int age[AGE_LENGTH];
    for (int i = 0; i < AGE_LENGTH; i++){
        age[i] = i*2;
        cout << "Age[" << i << "] = " << age[i] << endl;
    }

    cout << endl << endl;
    return (0);
}
