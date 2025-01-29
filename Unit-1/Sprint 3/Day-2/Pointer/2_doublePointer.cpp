#include <iostream>
using namespace std;
int main(){
    
    int x = 10;

    int *p = &x;

    int **q = &p;
    cout << "Value of q: " << q << endl;
    cout << "Value of *q: " << *q << endl;
    cout << "Value of **q: " << **q << endl;

}