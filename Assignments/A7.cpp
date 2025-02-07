// #include <iostream>
// using namespace std;
// string reverseString(string str) {
//     int n = str.length();
//     for (int i = 0; i < n / 2; i++) {
//         swap(str[i], str[n - i - 1]);
//     }
//     return str;
// }
// int main() {
//     string str = "Hello World";
//     cout << reverseString(str);
//     return 0;
// }




// #include <iostream>
// #include <cctype>
// using namespace std;
// bool isPalindrome(string str) {
//     int start = 0, end = str.length() - 1;
//     while (start < end) {
//         if (tolower(str[start]) != tolower(str[end])) {
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
// }
// int main() {
//     string str = "racecar";
//     if (isPalindrome(str)) {
//         cout << "Yes, it is a palindrome";
//     } else {
//         cout << "No, it is not a palindrome";
//     }
//     return 0;
// }



// #include <iostream>
// #include <cctype>
// using namespace std;
// void countVowelsConsonants(string str) {
//     int vowels = 0, consonants = 0;
//     for (int i = 0; i < str.length(); i++) {
//         if (isalpha(str[i])) {
//             if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u') {
//                 vowels++;
//             } else {
//                 consonants++;
//             }
//         }
//     }
//     cout << "Vowels: " << vowels << endl;
//     cout << "Consonants: " << consonants << endl;
// }
// int main() {
//     string str = "OpenAI ChatGPT";
//     countVowelsConsonants(str);
//     return 0;
// }



// #include <iostream>
// #include <unordered_map>
// using namespace std;
// char mostFrequentCharacter(string str) {
//     unordered_map<char, int> freq;
//     for (char c : str) {
//         freq[c]++;
//     }
//     char mostFrequent = str[0];
//     int maxCount = 0;
//     for (auto& entry : freq) {
//         if (entry.second > maxCount) {
//             maxCount = entry.second;
//             mostFrequent = entry.first;
//         }
//     }
//     return mostFrequent;
// }
// int main() {
//     string str = "programming";
//     cout << "Most frequent character: " << mostFrequentCharacter(str) << endl;
//     return 0;
// }



// #include <iostream>
// #include <unordered_set>
// using namespace std;
// string removeDuplicates(string str) {
//     unordered_set<char> seen;
//     string result = "";
//     for (char c : str) {
//         if (seen.find(c) == seen.end()) {
//             result += c;
//             seen.insert(c);
//         }
//     }
//     return result;
// }
// int main() {
//     string str = "banana";
//     cout << removeDuplicates(str) << endl;
//     return 0;
// }




// #include <iostream>
// #include <unordered_map>
// using namespace std;
// char firstNonRepeatingCharacter(string str) {
//     unordered_map<char, int> freq;
//     for (char c : str) {
//         freq[c]++;
//     }
//     for (char c : str) {
//         if (freq[c] == 1) {
//             return c;
//         }
//     }
//     return '\0';
// }
// int main() {
//     string str = "aabccdeff";
//     char result = firstNonRepeatingCharacter(str);
//     if (result != '\0') {
//         cout << "First non-repeating character: " << result << endl;
//     } else {
//         cout << "No non-repeating character" << endl;
//     }
//     return 0;
// }




// #include <iostream>
// #include <sstream>
// using namespace std;
// string toTitleCase(string str) {
//     stringstream ss(str);
//     string word, result = "";
//     while (ss >> word) {
//         word[0] = toupper(word[0]);
//         result += word + " ";
//     }
//     result.pop_back();
//     return result;
// }
// int main() {
//     string str = "hello world";
//     cout << toTitleCase(str) << endl;
//     return 0;
// }



// #include <iostream>
// #include <algorithm>
// using namespace std;
// bool areAnagrams(string str1, string str2) {
//     if (str1.length() != str2.length()) {
//         return false;
//     }
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());
//     return str1 == str2;
// }
// int main() {
//     string str1 = "listen", str2 = "silen";
//     if (areAnagrams(str1, str2)) {
//         cout << "Yes, they are anagrams" << endl;
//     } else {
//         cout << "No, they are not anagrams" << endl;
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;
// bool containsOnlyDigits(string str) {
//     for (char c : str) {
//         if (!isdigit(c)) {
//             return false;
//         }
//     }
//     return true;
// }
// int main() {
//     string str = "123456";
//     if (containsOnlyDigits(str)) {
//         cout << "Yes, it contains only digits" << endl;
//     } else {
//         cout << "No, it does not contain only digits" << endl;
//     }
//     return 0;
// }




// #include <iostream>
// #include <string>
// using namespace std;
// string replaceWord(string sentence, string oldWord, string newWord) {
//     size_t pos = 0;
//     while ((pos = sentence.find(oldWord, pos)) != string::npos) {
//         sentence.replace(pos, oldWord.length(), newWord);
//         pos += newWord.length();
//     }
//     return sentence;
// }
// int main() {
//     string sentence = "I love C++, C++ is great!";
//     string oldWord = "C++", newWord = "Python";
//     cout << replaceWord(sentence, oldWord, newWord) << endl;
//     return 0;
// }




// #include <iostream>
// #include <sstream>
// #include <algorithm>
// using namespace std;
// string reverseWords(string str) {
//     stringstream ss(str);
//     string word, result = "";
//     while (ss >> word) {
//         reverse(word.begin(), word.end());
//         result += word + " ";
//     }
//     result.pop_back();
//     return result;
// }
// int main() {
//     string str = "Hello World";
//     cout << reverseWords(str) << endl;
//     return 0;
// }


// #include <iostream>
// #include <sstream>
// using namespace std;
// string longestWord(string str) {
//     stringstream ss(str);
//     string word, longest = "";
//     while (ss >> word) {
//         if (word.length() > longest.length()) {
//             longest = word;
//         }
//     }
//     return longest;
// }
// int main() {
//     string str = "C++ is a powerful programming language";
//     cout << "Longest word: " << longestWord(str) << endl;
//     return 0;
// }




// #include <iostream>
// #include <unordered_map>
// using namespace std;
// void countCharacterOccurrences(string str) {
//     unordered_map<char, int> freq;
//     for (char c : str) {
//         if (isalpha(c)) {
//             freq[c]++;
//         }
//     }
//     for (auto& entry : freq) {
//         cout << entry.first << ": " << entry.second << endl;
//     }
// }
// int main() {
//     string str = "apple";
//     countCharacterOccurrences(str);
//     return 0;
// }




// #include <iostream>
// using namespace std;
// bool isRotation(string original, string rotated) {
//     if (original.length() != rotated.length()) {
//         return false;
//     }
//     string combined = original + original;
//     return combined.find(rotated) != string::npos;
// }
// int main() {
//     string original = "waterbottle";
//     string rotated = "erbottlewat";
//     if (isRotation(original, rotated)) {
//         cout << "Yes, it is a rotation" << endl;
//     } else {
//         cout << "No, it is not a rotation" << endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;
void generateSubstrings(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            cout << str.substr(i, j - i) << ", ";
        }
    }
}
int main() {
    string str = "abc";
    generateSubstrings(str);
    return 0;
}

















