// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

// Preprocessor directives
#include <iostream>
#include <string>
#include <cstdint> // stdint from C converted for C++
using namespace std;

//Constant
#define CAPACITY 5000
#define DEBUG // if this line is commented the dubug section will not be included

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    cout << "[About to perform the addition]" << endl;
#endif

    large += small;
    cout << "The large integer is " << large << endl;

    cout << endl << endl;
    return (0);
}
