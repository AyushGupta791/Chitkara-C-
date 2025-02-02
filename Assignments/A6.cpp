#include <iostream>
#include <unordered_map>
using namespace std;
int main() {


    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // int top = 0, bottom = m - 1, left = 0, right = n - 1;
    // while(top <= bottom && left <= right) {
    //     for(int i = left; i <= right; i++) cout << arr[top][i] << " ";
    //     top++;
    //     for(int i = top; i <= bottom; i++) cout << arr[i][right] << " ";
    //     right--;
    //     if(top <= bottom) {
    //         for(int i = right; i >= left; i--) cout << arr[bottom][i] << " ";
    //         bottom--;
    //     }
    //     if(left <= right) {
    //         for(int i = bottom; i >= top; i--) cout << arr[i][left] << " ";
    //         left++;
    //     }
    // }


    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int j = 0; j < n; j++) {
    //     if(j % 2 == 0) {
    //         for(int i = 0; i < m; i++) cout << arr[i][j] << " ";
    //     } else {
    //         for(int i = m - 1; i >= 0; i--) cout << arr[i][j] << " ";
    //     }
    // }


    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int i = 0; i < m; i++) {
    //     int r = i, c = 0;
    //     while(r < m && c < n) {
    //         cout << arr[r][c] << " ";
    //         r++;
    //         c++;
    //     }
    //     cout << endl;
    // }
    // for(int j = 1; j < n; j++) {
    //     int r = 0, c = j;
    //     while(r < m && c < n) {
    //         cout << arr[r][c] << " ";
    //         r++;
    //         c++;
    //     }
    //     cout << endl;
    // }


    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int i = 0; i < n; i++) cout << arr[0][i] << " ";
    // for(int i = 1; i < m; i++) cout << arr[i][n - 1] << " ";
    // if(m > 1) {
    //     for(int i = n - 2; i >= 0; i--) cout << arr[m - 1][i] << " ";
    // }
    // if(n > 1) {
    //     for(int i = m - 2; i > 0; i--) cout << arr[i][0] << " ";
    // }



    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int i = 0; i < m / 2; i++) {
    //     for(int j = i; j < n - i - 1; j++) {
    //         int temp = arr[i][j];
    //         arr[i][j] = arr[m - j - 1][i];
    //         arr[m - j - 1][i] = arr[m - i - 1][n - j - 1];
    //         arr[m - i - 1][n - j - 1] = arr[j][n - i - 1];
    //         arr[j][n - i - 1] = temp;
    //     }
    // }
    // for(int i = 0; i < m; i++) {
    //     for(int j = 0; j < n; j++) 
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }


    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int i = 0; i < m; i++) {
    //     int min_row = arr[i][0], col_index = 0;
    //     for(int j = 1; j < n; j++) {
    //         if(arr[i][j] < min_row) {
    //             min_row = arr[i][j];
    //             col_index = j;
    //         }
    //     }
    //     bool is_saddle = true;
    //     for(int k = 0; k < m; k++) {
    //         if(arr[k][col_index] > min_row) {
    //             is_saddle = false;
    //             break;
    //         }
    //     }
    //     if(is_saddle) {
    //         cout << "Saddle Point: " << min_row << endl;
    //         return 0;
    //     }
    // }
    // cout << "No Saddle Point" << endl;


    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // int max_sum = -1, row_index = -1;
    // for(int i = 0; i < m; i++) {
    //     int row_sum = 0;
    //     for(int j = 0; j < n; j++) 
    //         row_sum += arr[i][j];
    //     if(row_sum > max_sum) {
    //         max_sum = row_sum;
    //         row_index = i + 1;
    //     }
    // }
    // cout << "Row with maximum sum: " << row_index << endl;



    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) 
    //         cout << arr[j][i] << " ";
    //     cout << endl;
    // }


    //  int m, n;
    // cin >> m >> n;
    // if(m != n) {
    //     cout << "The matrix is not symmetric" << endl;
    //     return 0;
    // }
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // bool is_symmetric = true;
    // for(int i = 0; i < m; i++) {
    //     for(int j = i + 1; j < n; j++) {
    //         if(arr[i][j] != arr[j][i]) {
    //             is_symmetric = false;
    //             break;
    //         }
    //     }
    //     if(!is_symmetric) break;
    // }
    // if(is_symmetric) cout << "The matrix is symmetric" << endl;
    // else cout << "The matrix is not symmetric" << endl;



    //  int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int i = 0; i < m; i++) {
    //     if(i % 2 == 0) {
    //         for(int j = 0; j < n; j++) 
    //             cout << arr[i][j] << " ";
    //     } else {
    //         for(int j = n - 1; j >= 0; j--) 
    //             cout << arr[i][j] << " ";
    //     }
    // }



    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // unordered_map<int, int> freq;
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         freq[arr[i][j]]++;
    // for(int i = 0; i < m; i++) {
    //     for(int j = 0; j < n; j++) {
    //         if(freq[arr[i][j]] == 1) {
    //             cout << "First non-repeating element: " << arr[i][j] << endl;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "No non-repeating element" << endl;


    //  int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int i = 0; i < m; i++) {
    //     int max_in_row = arr[i][0];
    //     for(int j = 1; j < n; j++) {
    //         if(arr[i][j] > max_in_row) 
    //             max_in_row = arr[i][j];
    //     }
        // cout << "Max in row " << i + 1 << ": " << max_in_row << endl;
    // }



    // int m, n;
    // cin >> m >> n;
    // int arr[m][n];
    // for(int i = 0; i < m; i++) 
    //     for(int j = 0; j < n; j++) 
    //         cin >> arr[i][j];
    // for(int j = 0; j < n; j++) {
    //     int sum = 0;
    //     for(int i = 0; i < m; i++) 
    //         sum += arr[i][j];
    //     cout << "Sum of column " << j + 1 << ": " << sum << endl;
    // }


    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) 
            cin >> arr[i][j];
    for(int i = n - 1; i >= 0; i--) {
        for(int j = n - 1; j >= 0; j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



}
