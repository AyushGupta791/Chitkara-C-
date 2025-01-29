#include <iostream>
using namespace std;

int main(){

    int n = 10;
    int *const p = &n;
    cout << "Value of p: " << p <<endl;
    cout << "Value of *p: " << *p <<endl;

    int y = 20;
    //p = &y; //error ab pointer ki value change nhi ho skti;
    //cout << "Value of p: " << p << endl;
}