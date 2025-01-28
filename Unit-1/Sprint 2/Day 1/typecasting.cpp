#include<iostream>
#include<typeinfo>
using namespace std;
int main(){

    //implicit type conversion --> conversion from small data type to big data type
    // short < int < long < long long

    // short x=32000;
    // int xy =x;
    // cout<<x<<" "<<typeid(x).name()<<endl;
    // cout<<xy<<" "<<typeid(xy).name();


    // float avg =455.2311;
    // double davg =avg;
    // cout<<avg<<" "<<typeid(avg).name()<<endl;
    // cout<<davg<<" "<<typeid(davg).name();


    // char x = 'a';   // 1byte
    // int xy = x;
    // cout<<x<<" "<<typeid(x).name()<<endl;
    // cout<<xy<<" "<<typeid(xy).name();





    //explicit type conversion --> conversion from big data type to small data type
    // chances of data loss

    // int x = 563422;
    // short xy = (short)x;
    // cout<<x<<" "<<typeid(x).name()<<endl;
    // cout<<xy<<" "<<typeid(xy).name();




    

    // double dvalue = 5634.23;
    // int intvalue = dvalue;
    // cout<<dvalue<<" "<<typeid(dvalue).name()<<endl;
    // cout<<intvalue<<" "<<typeid(intvalue).name();







    
}