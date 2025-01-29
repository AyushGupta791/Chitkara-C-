#include <iostream>
using namespace std;
int main(){
    // Pointer Initialization
    int x = 10;
    cout << "Value of x: " << x << endl;
    cout<< "Address of x: " << &x << endl;

    int *a = &x;
    cout << "Value of a: " << a << endl;
    cout << "Value of *a: " << *a <<endl;

    int y = 20;
    cout << "Address of y: " << &y << endl;
    a = &y;
    cout << "Value of a: " << a << endl;
    cout << "Value of *a: " << *a << endl;
} 