#include <iostream>
using namespace std;
int main(){

    int arr[] = {10,20,30,40,50};
    int *p = arr;
    cout << "Value of arr: " << arr << endl;
    cout << "Value of arr[0]: " << &arr[0] << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value of p[0]: " << *p << endl;

    cout << "Value of *(arr+1): " << *(arr+1) << endl;
    cout << "Value of *(p+1): " << *(p+1) << endl;

    cout << "Value of arr[0]: " << arr[0] << endl;
    cout << "Value of p[0]: " << p[0] << endl;
}