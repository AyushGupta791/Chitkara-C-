#include <iostream>
using namespace std;

int main(){
    int nums[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // cout << nums[1][1] << endl;
    // cout << nums[2][2] << endl;
    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);

    // cout << rows << endl << columns << endl;

    for (int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}