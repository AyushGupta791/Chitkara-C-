#include <iostream>
using namespace std;

int main() {
    // int N;
    // cout << "Enter a number: ";
    // cin >> N;
    // cout << "Multiplication Table of " << N << " up to " << N << " x " << N << ":\n";
    // for(int i = 1; i <= N; i++) {
    //     for(int j = 1; j <= N; j++) {
    //         cout << i * j << "\t";  
    //     }
    //     cout << endl;  
    // }
    

    // int N;
    // cout << "Enter the height of the pyramid: ";
    // cin >> N;
    // for(int i = 1; i <= N; i++) {
    //     for(int j = i; j < N; j++) {
    //         cout << " ";
    //     }
    //     for(int j = 1; j <= i; j++) {
    //         cout << j;
    //     }
    //     for(int j = i - 1; j >= 1; j--) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }



    // int N;
    // cout << "Enter the height of the triangle: ";
    // cin >> N;
    // for(int i = 1; i <= N; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }



    // int N;
    // cout << "Enter the size of the chessboard: ";
    // cin >> N;
    // for(int i = 0; i < N; i++) {
    //     for(int j = 0; j < N; j++) {
    //         if ((i + j) % 2 == 0) {
    //             cout << "*";
    //         } else {
    //             cout << " "; 
    //         }
    //     }
    //     cout << endl;
    // }


    // int N;
    // cout << "Enter the value of N: ";
    // cin >> N;
    // for(int i = 2; i <= N; i++) {
    //     bool isPrime = true;
    //     for(int j = 2; j * j <= i; j++) {
    //         if(i % j == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if(isPrime) {
    //         cout << i << " ";
    //     }
    // }



    // int N;
    // cout << "Enter the value of N: ";
    // cin >> N;
    // for(int i = 1; i <= N; i++) {
    //     int sum = 0;
    //     for(int j = 1; j <= i; j++) {
    //         if(i % j == 0) {
    //             sum += j;
    //         }
    //     }
    //     cout << "Sum of divisors of " << i << " is: " << sum << endl;
    // }


    // int N;
    // cout << "Enter the size of the square: ";
    // cin >> N;
    // for(int i = 0; i < N; i++) {
    //     for(int j = 0; j < N; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }



    // int N;
    // cout << "Enter the value of N: ";
    // cin >> N;
    // for(int i = 1; i <= N; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         cout << i * j << " ";
    //     }
    //     cout << endl;
    // }



    // int N;
    // cout << "Enter the value of N: ";
    // cin >> N;
    // for(int i = 1; i <= N; i++) {
    //     for(int j = i; j < N; j++) {
    //         cout << " ";
    //     }
    //     for(int j = 1; j <= (2*i-1); j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int i = N-1; i >= 1; i--) {
    //     for(int j = N; j > i; j--) {
    //         cout << " ";
    //     }
    //     for(int j = 1; j <= (2*i-1); j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }


}
