#include<iostream>
using namespace std;
#include <iomanip>

// function definition
string display(string name , int age){
    
    return "Hello, " + name + " your age is " + to_string(age);
}

int main(){
    string name = "Ayush";
    int age = 18;

    //function call
    cout << display(name,age) << endl;
}