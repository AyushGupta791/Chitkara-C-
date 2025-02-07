// #include <iostream>
// using namespace std;
// int main() {
//     int n, sum = 0;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     int* ptr = arr;
//     for(int i = 0; i < n; i++) sum += *(ptr + i);
//     cout << "Sum of elements: " << sum << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     int* start = arr;
//     int* end = arr + n - 1;
//     while(start < end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
//     cout << "Reversed array: ";
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     int* ptr = arr;
//     int max = *ptr;
//     for(int i = 1; i < n; i++) {
//         ptr++;
//         if(*ptr > max) max = *ptr;
//     }
//     cout << "Largest element: " << max << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cin >> a >> b;
//     int* ptr1 = &a;
//     int* ptr2 = &b;
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
//     cout << "After swapping: " << a << " " << b << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     char str[100];
//     cin >> str;
//     char* ptr = str;
//     int count = 0;
//     while(*ptr != '\0') {
//         if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
//             count++;
//         ptr++;
//     }
//     cout << "Number of vowels: " << count << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     char str[100];
//     cin >> str;
//     char* start = str;
//     char* end = str;
//     while(*end != '\0') end++;
//     end--;
//     bool isPalindrome = true;
//     while(start < end) {
//         if(*start != *end) {
//             isPalindrome = false;
//             break;
//         }
//         start++;
//         end--;
//     }
//     if(isPalindrome) cout << "Palindrome" << endl;
//     else cout << "Not Palindrome" << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int* arr = new int[n];
//     for(int i = 0; i < n; i++) cin >> arr[i];
//     cout << "Elements are: ";
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
//     delete[] arr;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cin >> num;
//     int* ptr = &num;
//     int sum = 0;
//     while(*ptr > 0) {
//         sum += *ptr % 10;
//         *ptr /= 10;
//     }
//     cout << "Sum of digits: " << sum << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     char str[100];
//     cin >> str;
//     char* ptr = str;
//     int length = 0;
//     while(*ptr != '\0') {
//         length++;
//         ptr++;
//     }
//     cout << "Length of the string: " << length << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     char str1[100], str2[100];
//     cin >> str1 >> str2;
//     char* ptr1 = str1;
//     char* ptr2 = str2;
//     bool areEqual = true;
//     while(*ptr1 != '\0' && *ptr2 != '\0') {
//         if(*ptr1 != *ptr2) {
//             areEqual = false;
//             break;
//         }
//         ptr1++;
//         ptr2++;
//     }
//     if(*ptr1 != '\0' || *ptr2 != '\0') areEqual = false;
//     if(areEqual) cout << "Strings are same" << endl;
//     else cout << "Strings are different" << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     char str1[100], str2[100];
//     cin >> str1;
//     char* ptr1 = str1;
//     char* ptr2 = str2;
//     while(*ptr1 != '\0') {
//         *ptr2 = *ptr1;
//         ptr1++;
//         ptr2++;
//     }
//     *ptr2 = '\0'; 
//     cout << "Copied string: " << str2 << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// bool isPrime(int num) {
//     if (num <= 1) return false;
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) return false;
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     int* ptr = arr;
//     cout << "Prime numbers: ";
//     for (int i = 0; i < n; i++) {
//         if (isPrime(*ptr)) cout << *ptr << " ";
//         ptr++;
//     }
//     cout << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     int* ptr1 = arr;
//     for (int i = 0; i < n - 1; i++) {
//         int* ptr2 = ptr1 + i;
//         for (int j = i + 1; j < n; j++) {
//             if (*ptr2 > *(arr + j)) swap(ptr2, arr + j);
//             ptr2++;
//         }
//     }
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     int r1, c1, r2, c2;
//     cin >> r1 >> c1;
//     int mat1[r1][c1];
//     for (int i = 0; i < r1; i++) 
//         for (int j = 0; j < c1; j++) 
//             cin >> mat1[i][j];
//     cin >> r2 >> c2;
//     int mat2[r2][c2];
//     for (int i = 0; i < r2; i++) 
//         for (int j = 0; j < c2; j++) 
//             cin >> mat2[i][j];
//     if (c1 != r2) {
//         cout << "Matrix multiplication not possible!" << endl;
//         return 0;
//     }
//     int result[r1][c2] = {0};
//     int* ptr1, * ptr2, * ptrRes;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             ptr1 = &mat1[i][0];
//             ptr2 = &mat2[0][j];
//             ptrRes = &result[i][j];
//             for (int k = 0; k < c1; k++) {
//                 *ptrRes += *(ptr1 + k) * *(ptr2 + k * c2);
//             }
//         }
//     }
//     cout << "Result matrix: " << endl;
//     for (int i = 0; i < r1; i++) {
//         for (int j = 0; j < c2; j++) {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     char str[100], ch;
//     cin >> str >> ch;
//     char* ptr = str;
//     int count = 0;
//     while(*ptr != '\0') {
//         if(*ptr == ch) count++;
//         ptr++;
//     }
//     cout << "Number of occurrences: " << count << endl;
//     return 0;
// }






// #include <iostream>
// using namespace std;
// int main() {
//     int n1, n2;
//     cin >> n1;
//     int arr1[n1];
//     for (int i = 0; i < n1; i++) cin >> arr1[i];
//     cin >> n2;
//     int arr2[n2];
//     for (int i = 0; i < n2; i++) cin >> arr2[i];
//     int* ptr1 = arr1;
//     int* ptr2 = arr2;
//     int merged[n1 + n2];
//     int* ptrMerged = merged;
//     while (ptr1 < arr1 + n1 && ptr2 < arr2 + n2) {
//         if (*ptr1 < *ptr2) {
//             *ptrMerged = *ptr1;
//             ptr1++;
//         } else {
//             *ptrMerged = *ptr2;
//             ptr2++;
//         }
//         ptrMerged++;
//     }
//     while (ptr1 < arr1 + n1) {
//         *ptrMerged = *ptr1;
//         ptr1++;
//         ptrMerged++;
//     }
//     while (ptr2 < arr2 + n2) {
//         *ptrMerged = *ptr2;
//         ptr2++;
//         ptrMerged++;
//     }
//     cout << "Merged array: ";
//     for (int i = 0; i < n1 + n2; i++) {
//         cout << merged[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     int* ptr = arr;
//     int largest = *ptr;
//     int secondLargest = *ptr;
//     for (int i = 1; i < n; i++) {
//         if (*(ptr + i) > largest) {
//             secondLargest = largest;
//             largest = *(ptr + i);
//         } else if (*(ptr + i) > secondLargest && *(ptr + i) < largest) {
//             secondLargest = *(ptr + i);
//         }
//     }
//     cout << "Second largest element: " << secondLargest << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main() {
//     char str[100];
//     cin >> str;
//     char* start = str;
//     char* end = str;
//     while(*end != '\0') end++;
//     end--;
//     while(start < end) {
//         char temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
//     cout << "Reversed string: " << str << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     int* ptr = arr;
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += *ptr;
//         ptr++;
//     }
//     float average = (float)sum / n;
//     cout << "Sum: " << sum << endl;
//     cout << "Average: " << average << endl;
//     return 0;
// }





#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int* ptr1 = &num;
    int** ptr2 = &ptr1;
    cout << "Value using pointer to pointer: " << **ptr2 << endl;
    return 0;
}


