// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    // Auto inference, determines the type based on the value given
    
    auto a = 5;
    auto b = 12345678901;
    auto c = true;

    cout << "The type of a is " << typeid(a).name() << endl;
    cout << "The type of b is " << typeid(b).name() << endl;
    cout << "The type of c is " << typeid(c).name() << endl;

    cout << endl << endl;
    return (0);
}
