// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 37;
    cout << "The value of a is: " << a << endl;

    int *ptr = &a;
    *ptr = 50;

    cout << "The value of a is: " << a << endl;

    cout << endl << endl;
    return (0);
}
