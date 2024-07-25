// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>
using namespace std;

// Pass by value
int square(int x){
    x = x * x;
    return x;
}
// Pass by pointer (still value)
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
// Pass by reference
void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    
    cout << endl << endl;
    return (0);
}
