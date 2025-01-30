#include <iostream>
using namespace std;

int main(){
    // int nums[3][3] = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };
    // int rows = 3;
    // int columns = 3;
    // int sum=0;
    // for(int i=0;i<rows;i++){
    //     int sum_row = 0;
    //     for(int j=0;j<rows;j++){

    //     }
    // }


    // for(int i=0;i<rows;i++){
    //     int even =0;
    //     for(int j=0;j<rows;j++){
    //         if(nums[i][j]%2==0){
    //             even += nums[i][j];
    //         }
    //     }
    //     cout << even << endl;
    // }



    int nums[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int sum=0;
    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);
    for (int i=0;i<rows;i++){
        int evenSumRowWise1 = 0;
        int evenSumRowWise2 = 0;
        for(int j=0;j<columns;j++){
            sum+=nums[i][j];
            if(nums[i][j]%2==0){
                evenSumRowWise1+=nums[i][j];
            }
        }
        cout << "even sum for row " <<i+1<<": "<<evenSumRowWise1 <<endl;
    }
    cout<<"-------------"<<endl;
    cout<<"All elements sum: "<<sum<<endl;




}