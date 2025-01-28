#include <iostream>
using namespace std;
int main(){
    // int size;
    // int sum = 0;
    // int even = 0;
    // int odd = 0;
    // cout<<"Enter the size of array: ";
    // cin>>size;
    // int nums[size];
    // for(int i=0;i<size;i++){
    //     cout<<"Enter the element for index: "<<i<<"- ";
    //     cin>>nums[i];
    // }
    // for(int i=0;i<size;i++){
    //     sum+= nums[i];
    // }
    // for(int i=0;i<size;i++){
    //     if (nums[i]%2==0){
    //         even+= nums[i];
    //     }else{
    //         odd+= nums[i];
    //     }
    // }
    // int avg = sum/size;
    // cout<<sum<<endl;
    // cout<<even<<endl;
    // cout<<odd<<endl;
    // cout<<avg;



    // int numbers[] = {45,23,12,8,33,22,90,10};
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    // int evencount = 0;
    // for(int i = 0; i<size;i++){
    //     if(numbers[i]%2==0){
    //         evencount++;
    //     }
    // }
    // int evennums[evencount];
    // int index = 0;
    // for(int i = 0; i<size;i++){
    //     if(numbers[i]%2==0){
    //         evennums[index++] = numbers[i];
    //     }
    // }
    // for(int i=0;i<evencount;i++){
    //     cout<<evennums[i]<<" ";
    // }


    int size;
    cin>>size;
    int nums[size];
    int min = 0;
    int max = 0;

    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    for(int i=0;i<size;i++){
        if(nums[i]>max){
            max = nums[i];
        }
    }
    for(int i=0;i<size;i++){
        if(nums[i]<min){
            min = nums[i];
        }
    }
    cout<<max<<endl;
    cout<<min;
    
}