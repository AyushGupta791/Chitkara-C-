#include <iostream>
using namespace std;

void increasedPrice(int *p){
    *p = *p + 10;
    
}

int main(){
    int price = 100;
    cout << "Price before increase: " << price << endl;
    increasedPrice(&price);
    cout<< "Price after increase: " << price << endl;
    return 0;
}