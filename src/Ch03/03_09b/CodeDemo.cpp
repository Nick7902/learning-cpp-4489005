// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<int> primes;

    primes.push_back(2);
    primes.push_back(5);
    primes.push_back(9);
    primes.push_back(7);

    cout << "The vector primes has " << primes.size() << " elements." << endl;
    cout << "The value at index 2 is: " << primes[2] << endl;
    primes[2] = 10;
    cout << "The value at index 2 is: " << primes[2] << endl;

    cout << endl << endl;
    return (0);
}
