#include <iostream>
using namespace std;
int main(){
    // int nums[5];
    // nums[0] = 10;
    // nums[1] = 11;
    // nums[2] = 12;
    // cout << nums[0] <<endl;
    // cout << nums[2] <<endl;
    // cout << nums[3] <<endl;


    // int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    // for(int i = 0; i<size;i++){
    //     cout <<numbers[i]<<" ";
    // }


    int size;
    cout <<"Enter the size for the array: ";
    cin >> size;

    int nums[size];
    for(int i = 0; i<size; i++){
        cout <<"Enter the Element for index "<<i<<"- ";
        cin>>nums[i];
    }
    cout<<"Elements inside the array: ";

    for(int i=0;i<size;i++){
        cout<<nums[i]<<" ";
    }

}