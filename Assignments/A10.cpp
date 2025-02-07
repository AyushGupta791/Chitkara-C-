// #include <iostream>
// using namespace std;
// void reverseString(char* str) {
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
// }
// int main() {
//     char str[100];
//     cin >> str;
//     reverseString(str);
//     cout << "Reversed string: " << str << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void countVowelsAndConsonants(char* str, int &vowels, int &consonants) {
//     while(*str != '\0') {
//         if((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')) {
//             if(*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || 
//                *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u') {
//                 vowels++;
//             } else {
//                 consonants++;
//             }
//         }
//         str++;
//     }
// }
// int main() {
//     char str[100];
//     cin.getline(str, 100);
//     int vowels = 0, consonants = 0;
//     countVowelsAndConsonants(str, vowels, consonants);
//     cout << "Vowels: " << vowels << endl;
//     cout << "Consonants: " << consonants << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// bool isPalindrome(char* str) {
//     char* start = str;
//     char* end = str;
//     while(*end != '\0') end++;
//     end--;
//     while(start < end) {
//         if(*start != *end) return false;
//         start++;
//         end--;
//     }
//     return true;
// }
// int main() {
//     char str[100];
//     cin >> str;
//     if(isPalindrome(str)) {
//         cout << "The string is a palindrome." << endl;
//     } else {
//         cout << "The string is not a palindrome." << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int stringLength(char* str) {
//     int length = 0;
//     while(*str != '\0') {
//         length++;
//         str++;
//     }
//     return length;
// }
// int main() {
//     char str[100];
//     cin >> str;
//     cout << "Length of string: " << stringLength(str) << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void copyString(char* source, char* destination) {
//     while(*source != '\0') {
//         *destination = *source;
//         source++;
//         destination++;
//     }
//     *destination = '\0';
// }
// int main() {
//     char source[100], destination[100];
//     cin >> source;
//     copyString(source, destination);
//     cout << "Original String: " << destination << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int compareStrings(char* str1, char* str2) {
//     while(*str1 != '\0' && *str2 != '\0') {
//         if(*str1 < *str2) return -1;
//         if(*str1 > *str2) return 1;
//         str1++;
//         str2++;
//     }
//     if(*str1 == '\0' && *str2 != '\0') return -1;
//     if(*str1 != '\0' && *str2 == '\0') return 1;
//     return 0;
// }
// int main() {
//     char str1[100], str2[100];
//     cin >> str1 >> str2;
//     int result = compareStrings(str1, str2);
//     if(result == 0) {
//         cout << "Both strings are equal" << endl;
//     } else if(result == -1) {
//         cout << "First string is smaller" << endl;
//     } else {
//         cout << "First string is greater" << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// void convertCase(char* str) {
//     while(*str != '\0') {
//         if(*str >= 'a' && *str <= 'z') {
//             *str = *str - 'a' + 'A';
//         } else if(*str >= 'A' && *str <= 'Z') {
//             *str = *str - 'A' + 'a';
//         }
//         str++;
//     }
// }
// int main() {
//     char str[100];
//     cin >> str;
//     convertCase(str);
//     cout << "Converted String: " << str << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void removeDuplicates(char* str) {
//     char* ptr1 = str;
//     while(*ptr1 != '\0') {
//         char* ptr2 = ptr1 + 1;
//         while(*ptr2 != '\0') {
//             if(*ptr1 == *ptr2) {
//                 char* temp = ptr2;
//                 while(*temp != '\0') {
//                     *temp = *(temp + 1);
//                     temp++;
//                 }
//             } else {
//                 ptr2++;
//             }
//         }
//         ptr1++;
//     }
// }
// int main() {
//     char str[100];
//     cin >> str;
//     removeDuplicates(str);
//     cout << "String without duplicates: " << str << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int countWords(char* str) {
//     int count = 0;
//     while(*str != '\0') {
//         while(*str == ' ' && *str != '\0') str++;
//         if(*str != '\0') {
//             count++;
//             while(*str != ' ' && *str != '\0') str++;
//         }
//     }
//     return count;
// }
// int main() {
//     char str[100];
//     cin.getline(str, 100);
//     cout << "Word count: " << countWords(str) << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int countSubstringOccurrences(char* str, char* sub) {
//     int count = 0;
//     char* ptr1 = str;
//     while(*ptr1 != '\0') {
//         char* ptr2 = ptr1;
//         char* ptr3 = sub;
//         while(*ptr2 == *ptr3 && *ptr3 != '\0') {
//             ptr2++;
//             ptr3++;
//         }
//         if(*ptr3 == '\0') {
//             count++;
//         }
//         ptr1++;
//     }
//     return count;
// }
// int main() {
//     char str[100], sub[100];
//     cin >> str >> sub;
//     cout << "Occurrences of substring: " << countSubstringOccurrences(str, sub) << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void mergeArrays(int* arr1, int* arr2, int* mergedArr, int n1, int n2) {
//     int i = 0, j = 0, k = 0;
//     while(i < n1 && j < n2) {
//         if(arr1[i] < arr2[j]) {
//             mergedArr[k++] = arr1[i++];
//         } else {
//             mergedArr[k++] = arr2[j++];
//         }
//     }
//     while(i < n1) mergedArr[k++] = arr1[i++];
//     while(j < n2) mergedArr[k++] = arr2[j++];
// }
// int main() {
//     int arr1[] = {1, 3, 5}, arr2[] = {2, 4, 6};
//     int n1 = 3, n2 = 3;
//     int mergedArr[n1 + n2];
//     mergeArrays(arr1, arr2, mergedArr, n1, n2);
//     cout << "Merged Array: ";
//     for(int i = 0; i < n1 + n2; i++) {
//         cout << mergedArr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void findMaxMin(int* arr, int n, int &max, int &min) {
//     max = *arr;
//     min = *arr;
//     for(int i = 1; i < n; i++) {
//         if(*(arr + i) > max) max = *(arr + i);
//         if(*(arr + i) < min) min = *(arr + i);
//     }
// }
// int main() {
//     int arr[] = {10, 3, 7, 2, 15};
//     int n = 5;
//     int max, min;
//     findMaxMin(arr, n, max, min);
//     cout << "Maximum: " << max << endl;
//     cout << "Minimum: " << min << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// void reverseArray(int* arr, int n) {
//     int* start = arr;
//     int* end = arr + n - 1;
//     while(start < end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5;
//     reverseArray(arr, n);
//     cout << "Reversed Array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// void countCharacterFrequency(char* str) {
//     int freq[256] = {0};  
//     while(*str != '\0') {
//         freq[*str]++;
//         str++;
//     }
//     for(int i = 0; i < 256; i++) {
//         if(freq[i] > 0) {
//             cout << (char)i << ": " << freq[i] << endl;
//         }
//     }
// }
// int main() {
//     char str[100];
//     cin >> str;
//     countCharacterFrequency(str);
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void findCommonElements(int* arr1, int* arr2, int n1, int n2) {
//     for(int i = 0; i < n1; i++) {
//         for(int j = 0; j < n2; j++) {
//             if(*(arr1 + i) == *(arr2 + j)) {
//                 cout << *(arr1 + i) << " ";
//                 break;
//             }
//         }
//     }
// }
// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {3, 4, 5, 6, 7};
//     int n1 = 5, n2 = 5;
//     cout << "Common Elements: ";
//     findCommonElements(arr1, arr2, n1, n2);
//     cout << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void findUniqueElements(int* arr, int n) {
//     for(int i = 0; i < n; i++) {
//         bool isUnique = true;
//         for(int j = 0; j < n; j++) {
//             if(i != j && *(arr + i) == *(arr + j)) {
//                 isUnique = false;
//                 break;
//             }
//         }
//         if(isUnique) {
//             cout << *(arr + i) << " ";
//         }
//     }
// }
// int main() {
//     int arr[] = {1, 2, 2, 3, 4, 4, 5};
//     int n = 7;
//     cout << "Unique Elements: ";
//     findUniqueElements(arr, n);
//     cout << endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void rotateArray(int* arr, int n, int k) {
//     k = k % n; // In case k is greater than n
//     int* temp = new int[k];
//     for(int i = 0; i < k; i++) {
//         temp[i] = *(arr + n - k + i);
//     }
//     for(int i = n - 1; i >= k; i--) {
//         *(arr + i) = *(arr + i - k);
//     }
//     for(int i = 0; i < k; i++) {
//         *(arr + i) = temp[i];
//     }
//     delete[] temp;
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5, k = 2;
//     rotateArray(arr, n, k);
//     cout << "Rotated Array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }





// #include <iostream>
// #include <cstring>
// using namespace std;
// void findLongestWord(char* str) {
//     int maxLength = 0;
//     int currentLength = 0;
//     char* longestWord = str;
//     char* currentWord = str;
//     while (*str != '\0') {
//         if (*str != ' ') {
//             currentLength++;
//         } else {
//             if (currentLength > maxLength) {
//                 maxLength = currentLength;
//                 longestWord = currentWord;
//             }
//             currentLength = 0;
//             currentWord = str + 1;
//         }
//         str++;
//     }
//     if (currentLength > maxLength) {
//         longestWord = currentWord;
//     }
//     cout << "Longest Word: ";
//     for (int i = 0; i < maxLength; i++) {
//         cout << *(longestWord + i);
//     }
//     cout << endl;
// }
// int main() {
//     char str[] = "Masai School teaches coding";
//     findLongestWord(str);
//     return 0;
// }





// #include <iostream>
// using namespace std;
// void concatenateStrings(char* str1, char* str2) {
//     while (*str1 != '\0') {
//         str1++;
//     }
//     while (*str2 != '\0') {
//         *str1 = *str2;
//         str1++;
//         str2++;
//     }
//     *str1 = '\0';
// }
// int main() {
//     char str1[100] = "Hello";
//     char str2[] = "World";
//     concatenateStrings(str1, str2);
//     cout << "Concatenated String: " << str1 << endl;
//     return 0;
// }





#include <iostream>
using namespace std;
bool areAnagrams(char* str1, char* str2) {
    int count[256] = {0};
    while (*str1 != '\0') {
        count[*str1]++;
        str1++;
    }
    while (*str2 != '\0') {
        count[*str2]--;
        str2++;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    if (areAnagrams(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}
