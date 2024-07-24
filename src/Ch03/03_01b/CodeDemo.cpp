// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

enum class cow_purpose {dairy, meat, hide, pet};

struct cow{
    string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;

    cout << my_cow.name << " is a type " << (int)my_cow.purpose << " cow." << endl;
    cout << my_cow.name << " is " << my_cow.age << " years old." << endl;
 
    cout << endl << endl;
    return (0);
}
