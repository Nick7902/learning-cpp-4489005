// Learning C++ 
// Exercise 04_04
// For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {12, 25, 31, 47, 58};
    float average;

    average = 0.0f;
    for (auto x : numbers){
        average += x;
    }
    average /= numbers.size();
    cout << "The average is: " << average << endl;
    
    cout << endl << endl;
    return (0);
}
