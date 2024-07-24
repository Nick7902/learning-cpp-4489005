// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    // Flush is used to ensure the printing is complete before asking for input
    cout << "Enter your name: " << flush;
    cin >> str;
    cout << "Hi " << str << "!";

    cout << endl << endl;
    return (0);
}
