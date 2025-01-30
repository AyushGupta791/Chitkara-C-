#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

// int main(){

    // int N;
    // cin >> N;
    // long long sum = (long long)(N) * (N + 1) / 2;
    // cout << sum << endl;



    // int N;
    // cin >> N;
    // long long factorial = 1;
    // for (int i = 1; i <= N; i++) {
    //     factorial *= i;
    // }
    // cout << factorial << endl;


    // int N;
    // cin >> N;
    // int reversed = 0;
    // while (N > 0) {
    //     int last_digit = N % 10;        
    //     reversed = reversed * 10 + last_digit;  
    //     N /= 10;  
    // }
    // cout << reversed << endl;


    // int N;
    // cin >> N;
    // int count = 0;
    // while (N > 0) {
    //     N /= 10;  
    //     count++;  
    // }
    // cout << count << endl;


    // int N;
    // cin >> N;
    // for (int i = 1; i <= 10; i++) {
    //     cout << N << " * " << i << " = " << N * i << endl;
    // }



    // int N;
    // cin >> N;
    // if (N <= 1) {
    //     cout << "Not Prime" << endl;
    //     return 0;
    // }
    // if (N == 2) {
    //     cout << "Prime" << endl;
    //     return 0;
    // }
    // bool isPrime = true;
    // for (int i = 2; i <= sqrt(N); i++) {
    //     if (N % i == 0) {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime) {
    //     cout << "Prime" << endl;
    // } else {
    //     cout << "Not Prime" << endl;
    // }


    // int N;
    // cin >> N;
    // int sum = 0;
    // while (N > 0) {
    //     sum += N % 10;
    //     N /= 10;
    // }
    // cout << sum << endl;


    // int A, B;
    // cin >> A >> B;
    // while (B != 0) {
    //     int temp = B;
    //     B = A % B;
    //     A = temp;
    // }
    // cout << A << endl;



    // int N;
    // cin >> N;
    // int a = 0, b = 1;
    // for (int i = 1; i <= N; i++) {
    //     cout << a << " ";
    //     int next = a + b;
    //     a = b;
    //     b = next;
    // }
    // cout << endl;


    // int N, original, reversed = 0;
    // cin >> N;
    // original = N;
    // while (N > 0) {
    //     reversed = reversed * 10 + N % 10;
    //     N /= 10;
    // }
    // if (original == reversed) {
    //     cout << "Palindrome" << endl;
    // } else {
    //     cout << "Not Palindrome" << endl;
    // }


    // int N;
    // cin >> N;
    // for (int i = 2; i <= N; i += 2) {
    //     cout << i << " ";
    // }
    // cout << endl;


    // string S;
    // cin >> S;
    // int count = 0;
    // for (int i = 0; i < S.length(); i++) {
    //     char ch = tolower(S[i]);
    //     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    //         count++;
    //     }
    // }
    // cout << count << endl;


    // int N;
    // cin >> N;
    // int largest = 0;
    // while (N > 0) {
    //     int digit = N % 10;
    //     if (digit > largest) {
    //         largest = digit;
    //     }
    //     N /= 10;
    // }
    // cout << largest << endl;



    // int N, original, sum = 0, digits;
    // cin >> N;
    // original = N;
    // digits = log10(N) + 1;
    // while (N > 0) {
    //     int digit = N % 10;
    //     sum += pow(digit, digits);
    //     N /= 10;
    // }
    // if (original == sum) {
    //     cout << "Armstrong" << endl;
    // } else {
    //     cout << "Not Armstrong" << endl;
    // }


    // int N;
    // cin >> N;
    // int sum = 0;
    // for (int i = 1; i <= N; i += 2) {
    //     sum += i;
    // }
    // cout << sum << endl;

// }


// int gcd(int A, int B) {
//     while (B != 0) {
//         int temp = B;
//         B = A % B;
//         A = temp;
//     }
//     return A;
// }
// int main() {
//     int A, B;
//     cin >> A >> B;
//     int lcm = (A * B) / gcd(A, B);
//     cout << lcm << endl;
//     return 0;
// }




int main() {
    // int N;
    // cin >> N;
    // int count = 0;
    // for (int i = 1; i <= sqrt(N); i++) {
    //     if (N % i == 0) {
    //         if (i == N / i) {
    //             count++;  
    //         } else {
    //             count += 2;  
    //         }
    //     }
    // }
    // cout << count << endl;


    // int N;
    // cin >> N;
    // string binary = "";
    // while (N > 0) {
    //     binary = to_string(N % 2) + binary;
    //     N /= 2;
    // }
    // if (binary == "") {
    //     binary = "0";
    // }
    // cout << binary << endl;


    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int largest = arr[0], secondLargest = -1;
    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    cout << secondLargest << endl;


}