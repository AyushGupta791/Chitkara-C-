#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    
    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }


    // int arr[] = {10, 20, 30};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int sum = 0;
    // for (int i = 0; i < size; i++) {
    //     sum += arr[i];
    // }
    // cout << "Sum of elements: " << sum << endl;



    // int arr[] = {4, 8, 1, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int largest = arr[0];
    // for (int i = 1; i < size; i++) {
    //     if (arr[i] > largest) {
    //         largest = arr[i];
    //     }
    // }
    // cout << "Largest element: " << largest << endl;



    // int arr[] = {4, 8, 1, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);  
    // int smallest = arr[0];
    // for (int i = 1; i < size; i++) {
    //     if (arr[i] < smallest) {
    //         smallest = arr[i];
    //     }
    // }
    // cout << "Smallest element: " << smallest << endl;


    // int arr[] = {5, 10, 15, 20};
    // int size = sizeof(arr) / sizeof(arr[0]); 
    // int value = 12;
    // int count = 0;
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] > value) {
    //         count++;
    //     }
    // }
    // cout << "Count: " << count << endl;


    // int arr[] = {1, 2, 3, 4, 5, 6};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // cout << "Even numbers: ";
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] % 2 == 0) {  
    //         cout << arr[i] << " ";  
    //     }
    // }
    // cout << endl;


    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]); 
    // cout << "Odd numbers: ";
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] % 2 != 0) {  
    //         cout << arr[i] << " ";  
    //     }
    // }
    // cout << endl;


    // int arr[] = {2, 4, 6};
    // int size = sizeof(arr) / sizeof(arr[0]);  
    // cout << "New array: {";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i] * 2;
    //     if (i < size - 1) {
    //         cout << ", ";  
    //     }
    // }
    // cout << "}" << endl; 



    // int arr[] = {3, 7, 9, 2};
    // int size = sizeof(arr) / sizeof(arr[0]); 
    // int number = 7;
    // bool found = false;
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] == number) {
    //         found = true;
    //         break;  
    //     }
    // }
    // if (found) {
    //     cout << "Number found: true" << endl;
    // } else {
    //     cout << "Number found: false" << endl;
    // }


    // int arr[] = {5, 10, 15, 20, 25};
    // int size = sizeof(arr) / sizeof(arr[0]);  
    // cout << "First element: " << arr[0] << endl;
    // cout << "Last element: " << arr[size - 1] << endl;


    // int arr[] = {1, 2, 3, 4, 5};
    // int size = sizeof(arr) / sizeof(arr[0]); 
    // for (int i = 0; i < size / 2; i++) {
    //     int temp = arr[i];
    //     arr[i] = arr[size - 1 - i];
    //     arr[size - 1 - i] = temp;
    // }
    // cout << "Reversed array: {";
    // for (int i = 0; i < size; i++) {
    //     cout << arr[i];
    //     if (i < size - 1) {
    //         cout << ", ";  
    //     }
    // }
    // cout << "}" << endl;


    // int arr[] = {12, 3, 5, 8, 10};
    // int size = sizeof(arr) / sizeof(arr[0]);  
    // int evenCount = 0, oddCount = 0;
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] % 2 == 0) {  
    //         evenCount++;
    //     } else {  
    //         oddCount++;
    //     }
    // }
    // cout << "Even count: " << evenCount << ", Odd count: " << oddCount << endl;


    // int arr[] = {1, 2, 3, 4, 5};  
    // int size = sizeof(arr) / sizeof(arr[0]); 
    // bool isSorted = true;
    // for (int i = 0; i < size - 1; i++) {
    //     if (arr[i] > arr[i + 1]) {
    //         isSorted = false; 
    //         break;
    //     }
    // }
    // cout << "Array is sorted: " << (isSorted ? "true" : "false") << endl;


    // int arr1[] = {1, 3, 5};
    // int arr2[] = {2, 4, 6};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]); 
    // int size2 = sizeof(arr2) / sizeof(arr2[0]);  
    // int mergedArray[size1 + size2];
    // for (int i = 0; i < size1; i++) {
    //     mergedArray[i] = arr1[i];
    // }
    // for (int i = 0; i < size2; i++) {
    //     mergedArray[size1 + i] = arr2[i];
    // }
    // cout << "Merged array: {";
    // for (int i = 0; i < size1 + size2; i++) {
    //     cout << mergedArray[i];
    //     if (i < size1 + size2 - 1) {
    //         cout << ", ";  
    //     }
    // }
    // cout << "}" << endl;



    int arr[] = {1, 2, 2, 3, 1, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]); 
    unordered_map<int, int> freqMap;
    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
    }
    cout << "Frequency:" << endl;
    for (auto& pair : freqMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    
    
    
}
