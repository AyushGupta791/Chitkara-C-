// #include <iostream>
// using namespace std;

// void add(double a, double b) {
//     cout << "Result: " << a + b << endl;
// }

// void subtract(double a, double b) {
//     cout << "Result: " << a - b << endl;
// }

// void multiply(double a, double b) {
//     cout << "Result: " << a * b << endl;
// }

// void divide(double a, double b) {
//     if (b != 0) {
//         cout << "Result: " << a / b << endl;
//     } else {
//         cout << "Error: Division by zero!" << endl;
//     }
// }

// void findRemainder(double a, double b) {
//     if (b != 0) {
//         cout << "Result: " << (int)a % (int)b << endl;
//     } else {
//         cout << "Error: Division by zero!" << endl;
//     }
// }

// int main() {
//     double num1, num2;
//     int choice;
    
//     do {
//         cout << "\nSmart Calculator\n";
//         cout << "1. Addition\n";
//         cout << "2. Subtraction\n";
//         cout << "3. Multiplication\n";
//         cout << "4. Division\n";
//         cout << "5. Find the remainder\n";
//         cout << "6. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (choice >= 1 && choice <= 5) {
//             cout << "Enter two numbers: ";
//             cin >> num1 >> num2;
//         }

//         switch (choice) {
//             case 1:
//                 add(num1, num2);
//                 break;
//             case 2:
//                 subtract(num1, num2);
//                 break;
//             case 3:
//                 multiply(num1, num2);
//                 break;
//             case 4:
//                 divide(num1, num2);
//                 break;
//             case 5:
//                 findRemainder(num1, num2);
//                 break;
//             case 6:
//                 cout << "Exiting the program.\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }
//     } while (choice != 6);

//     return 0;
// }






// #include <iostream>
// using namespace std;

// float calculatePercentage(int marks[], int totalSubjects) {
//     int sum = 0;
//     for (int i = 0; i < totalSubjects; i++) {
//         sum += marks[i];
//     }
//     return (float)sum / totalSubjects;
// }

// char assignGrade(float percentage) {
//     if (percentage >= 90) return 'A';
//     if (percentage >= 80) return 'A';
//     if (percentage >= 70) return 'B';
//     if (percentage >= 60) return 'C';
//     if (percentage >= 50) return 'D';
//     return 'F';  // Fail
// }

// int main() {
//     int marks[5];
//     int totalSubjects = 5;
    
//     cout << "Enter marks for 5 subjects:\n";
//     for (int i = 0; i < totalSubjects; i++) {
//         cout << "Subject " << i + 1 << ": ";
//         cin >> marks[i];
//     }

//     float percentage = calculatePercentage(marks, totalSubjects);
//     char grade = assignGrade(percentage);

//     cout << "\nPercentage: " << percentage << "%\n";
//     cout << "Grade: " << grade << endl;

//     return 0;
// }






// #include <iostream>
// using namespace std;

// double celsiusToFahrenheit(double celsius) {
//     return (celsius * 9/5) + 32;
// }

// double fahrenheitToCelsius(double fahrenheit) {
//     return (fahrenheit - 32) * 5/9;
// }

// double celsiusToKelvin(double celsius) {
//     return celsius + 273.15;
// }

// int main() {
//     double temp;
//     int choice;

//     do {
//         cout << "\nTemperature Converter\n";
//         cout << "1. Celsius to Fahrenheit\n";
//         cout << "2. Fahrenheit to Celsius\n";
//         cout << "3. Celsius to Kelvin\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (choice != 4) {
//             cout << "Enter temperature: ";
//             cin >> temp;
//         }

//         switch (choice) {
//             case 1:
//                 cout << temp << " Celsius = " << celsiusToFahrenheit(temp) << " Fahrenheit\n";
//                 break;
//             case 2:
//                 cout << temp << " Fahrenheit = " << fahrenheitToCelsius(temp) << " Celsius\n";
//                 break;
//             case 3:
//                 cout << temp << " Celsius = " << celsiusToKelvin(temp) << " Kelvin\n";
//                 break;
//             case 4:
//                 cout << "Exiting the program.\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }
//     } while (choice != 4);

//     return 0;
// }






// #include <iostream>
// #include <bitset>
// #include <sstream>
// using namespace std;

// string decimalToBinary(int decimal) {
//     return bitset<32>(decimal).to_string().substr(0, log2(decimal) + 1);
// }

// string decimalToOctal(int decimal) {
//     stringstream ss;
//     ss << oct << decimal;
//     return ss.str();
// }

// string decimalToHexadecimal(int decimal) {
//     stringstream ss;
//     ss << hex << decimal;
//     return ss.str();
// }

// int binaryToDecimal(string binary) {
//     int decimal;
//     stringstream ss(binary);
//     ss >> std::bitset<32>(binary);
//     return stoi(binary, nullptr, 2);
// }

// int main() {
//     int decimal;
//     string binary;
//     int choice;

//     do {
//         cout << "\nNumber System Converter\n";
//         cout << "1. Decimal to Binary\n";
//         cout << "2. Decimal to Octal\n";
//         cout << "3. Decimal to Hexadecimal\n";
//         cout << "4. Binary to Decimal\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         if (choice == 1 || choice == 2 || choice == 3) {
//             cout << "Enter decimal number: ";
//             cin >> decimal;
//         } else if (choice == 4) {
//             cout << "Enter binary number: ";
//             cin >> binary;
//         }

//         switch (choice) {
//             case 1:
//                 cout << decimal << " in Binary: " << decimalToBinary(decimal) << endl;
//                 break;
//             case 2:
//                 cout << decimal << " in Octal: " << decimalToOctal(decimal) << endl;
//                 break;
//             case 3:
//                 cout << decimal << " in Hexadecimal: " << decimalToHexadecimal(decimal) << endl;
//                 break;
//             case 4:
//                 cout << binary << " in Decimal: " << binaryToDecimal(binary) << endl;
//                 break;
//             case 5:
//                 cout << "Exiting the program.\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }
//     } while (choice != 5);

//     return 0;
// }






// #include <iostream>
// using namespace std;

// double balance = 0.0;

// void checkBalance() {
//     cout << "Your current balance is: $" << balance << endl;
// }

// void depositMoney() {
//     double amount;
//     cout << "Enter amount to deposit: $";
//     cin >> amount;
//     if (amount > 0) {
//         balance += amount;
//         cout << "Successfully deposited $" << amount << endl;
//     } else {
//         cout << "Invalid deposit amount!" << endl;
//     }
// }

// void withdrawMoney() {
//     double amount;
//     cout << "Enter amount to withdraw: $";
//     cin >> amount;
//     if (amount > 0 && amount <= balance) {
//         balance -= amount;
//         cout << "Successfully withdrew $" << amount << endl;
//     } else if (amount > balance) {
//         cout << "Insufficient funds!" << endl;
//     } else {
//         cout << "Invalid withdrawal amount!" << endl;
//     }
// }

// int main() {
//     int choice;
    
//     do {
//         cout << "\nBank Transaction System\n";
//         cout << "1. Check Balance\n";
//         cout << "2. Deposit Money\n";
//         cout << "3. Withdraw Money\n";
//         cout << "4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 checkBalance();
//                 break;
//             case 2:
//                 depositMoney();
//                 break;
//             case 3:
//                 withdrawMoney();
//                 break;
//             case 4:
//                 cout << "Exiting the program.\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }
//     } while (choice != 4);

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

// void printPrimesInRange(int start, int end) {
//     cout << "Prime numbers in the range [" << start << ", " << end << "]:\n";
//     for (int i = start; i <= end; i++) {
//         if (isPrime(i)) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int choice, num, start, end;

//     do {
//         cout << "\nPrime Number Operations\n";
//         cout << "1. Check if a number is Prime\n";
//         cout << "2. Print all prime numbers in a given range\n";
//         cout << "3. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter number to check if it is prime: ";
//                 cin >> num;
//                 if (isPrime(num)) {
//                     cout << num << " is a prime number.\n";
//                 } else {
//                     cout << num << " is not a prime number.\n";
//                 }
//                 break;
//             case 2:
//                 cout << "Enter the range (start and end): ";
//                 cin >> start >> end;
//                 printPrimesInRange(start, end);
//                 break;
//             case 3:
//                 cout << "Exiting the program.\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }
//     } while (choice != 3);

//     return 0;
// }






// #include <iostream>
// #include <cmath>
// using namespace std;

// bool isArmstrong(int num) {
//     int sum = 0, originalNum = num, digits = 0;
    
//     while (num != 0) {
//         num /= 10;
//         digits++;
//     }

//     num = originalNum;
//     while (num != 0) {
//         int digit = num % 10;
//         sum += pow(digit, digits);
//         num /= 10;
//     }

//     return sum == originalNum;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isArmstrong(num)) {
//         cout << num << " is an Armstrong number.\n";
//     } else {
//         cout << num << " is not an Armstrong number.\n";
//     }

//     return 0;
// }






// #include <iostream>
// using namespace std;

// void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result[i][j] = mat1[i][j] + mat2[i][j];
//         }
//     }
// }

// void subtractMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result[i][j] = mat1[i][j] - mat2[i][j];
//         }
//     }
// }

// void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < 3; k++) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }

// void transposeMatrix(int mat[3][3], int result[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             result[i][j] = mat[j][i];
//         }
//     }
// }

// void printMatrix(int mat[3][3]) {
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cout << mat[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int mat1[3][3], mat2[3][3], result[3][3];
//     int choice;

//     cout << "Enter values for Matrix 1 (3x3):\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> mat1[i][j];
//         }
//     }

//     cout << "Enter values for Matrix 2 (3x3):\n";
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 3; j++) {
//             cin >> mat2[i][j];
//         }
//     }

//     do {
//         cout << "\nMatrix Operations\n";
//         cout << "1. Add Matrices\n";
//         cout << "2. Subtract Matrices\n";
//         cout << "3. Multiply Matrices\n";
//         cout << "4. Transpose Matrix 1\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 addMatrices(mat1, mat2, result);
//                 cout << "Result of Matrix Addition:\n";
//                 printMatrix(result);
//                 break;
//             case 2:
//                 subtractMatrices(mat1, mat2, result);
//                 cout << "Result of Matrix Subtraction:\n";
//                 printMatrix(result);
//                 break;
//             case 3:
//                 multiplyMatrices(mat1, mat2, result);
//                 cout << "Result of Matrix Multiplication:\n";
//                 printMatrix(result);
//                 break;
//             case 4:
//                 transposeMatrix(mat1, result);
//                 cout << "Transpose of Matrix 1:\n";
//                 printMatrix(result);
//                 break;
//             case 5:
//                 cout << "Exiting the program.\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }
//     } while (choice != 5);

//     return 0;
// }






// #include <iostream>
// #include <algorithm>
// using namespace std;

// int stringLength(string str) {
//     return str.length();
// }

// void toUpperCase(string &str) {
//     transform(str.begin(), str.end(), str.begin(), ::toupper);
// }

// void toLowerCase(string &str) {
//     transform(str.begin(), str.end(), str.begin(), ::tolower);
// }

// void reverseString(string &str) {
//     reverse(str.begin(), str.end());
// }

// int main() {
//     string str;
//     int choice;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     do {
//         cout << "\nString Operations\n";
//         cout << "1. Find the length of the string\n";
//         cout << "2. Convert string to uppercase\n";
//         cout << "3. Convert string to lowercase\n";
//         cout << "4. Reverse the string\n";
//         cout << "5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//         cin.ignore();  

//         switch (choice) {
//             case 1:
//                 cout << "Length of the string: " << stringLength(str) << endl;
//                 break;
//             case 2:
//                 toUpperCase(str);
//                 cout << "String in uppercase: " << str << endl;
//                 break;
//             case 3:
//                 toLowerCase(str);
//                 cout << "String in lowercase: " << str << endl;
//                 break;
//             case 4:
//                 reverseString(str);
//                 cout << "Reversed string: " << str << endl;
//                 break;
//             case 5:
//                 cout << "Exiting the program.\n";
//                 break;
//             default:
//                 cout << "Invalid choice! Please try again.\n";
//         }
//     } while (choice != 5);

//     return 0;
// }





#include <iostream>
using namespace std;

long long factorial(int num) {
    long long result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

void fibonacci(int n) {
    long long a = 0, b = 1;
    cout << "First " << n << " Fibonacci numbers: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int choice, num;

    do {
        cout << "\nFactorial & Fibonacci Generator\n";
        cout << "1. Calculate the factorial of a number\n";
        cout << "2. Print the first N Fibonacci numbers\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number to calculate factorial: ";
                cin >> num;
                cout << "Factorial of " << num << " is: " << factorial(num) << endl;
                break;
            case 2:
                cout << "Enter the number of Fibonacci numbers to display: ";
                cin >> num;
                fibonacci(num);
                break;
            case 3:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}

