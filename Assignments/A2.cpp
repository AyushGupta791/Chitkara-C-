#include <iostream>
using namespace std;
int main() {

    // int num1, num2, num3;
    // cout << "Enter three integers: ";
    // cin >> num1 >> num2 >> num3;

    // if (num1 == num2 && num2 == num3) {
    //     cout << "All numbers are equal." << endl;
    // } else if (num1 == num2 || num2 == num3 || num1 == num3) {
    //     cout << "Two numbers are equal." << endl;
    // } else {
    //     int largest = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3 ? num2 : num3);
    //     cout << "The largest number is: " << largest << endl;
    // }


    // int side1, side2, side3;
    // cout << "Enter the three sides of the triangle: ";
    // cin >> side1 >> side2 >> side3;
    // if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
    //     if (side1 == side2 && side2 == side3) {
    //         cout << "The triangle is Equilateral." << endl;
    //     } else if (side1 == side2 || side2 == side3 || side1 == side3) {
    //         cout << "The triangle is Isosceles." << endl;
    //     } else {
    //         cout << "The triangle is Scalene." << endl;
    //     }
    // } else {
    //     cout << "The sides do not form a valid triangle." << endl;
    // }


    // float totalAmount, finalAmount, discount;
    // cout << "Enter the total amount spent: ₹";
    // cin >> totalAmount;
    // if (totalAmount > 5000) {
    //     discount = 0.20 * totalAmount;
    // } else if (totalAmount >= 3000) {
    //     discount = 0.10 * totalAmount;
    // } else {
    //     discount = 0;
    // }
    // finalAmount = totalAmount - discount;
    // cout << "Discount: ₹" << discount << endl;
    // cout << "Final bill amount: ₹" << finalAmount << endl;


    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // if (num > 0) {
    //     cout << "The number is Positive." << endl;
    // } else if (num < 0) {
    //     cout << "The number is Negative." << endl;
    // } else {
    //     cout << "The number is Zero." << endl;
    // }
    // if (num % 2 == 0) {
    //     cout << "The number is Even." << endl;
    // } else {
    //     cout << "The number is Odd." << endl;
    // }
    // if (num % 3 == 0) {
    //     cout << "The number is divisible by 3." << endl;
    // } else if (num % 5 == 0) {
    //     cout << "The number is divisible by 5." << endl;
    // } else {
    //     cout << "The number is not divisible by 3 or 5." << endl;
    // }


    // float a, b, c, discriminant;
    // cout << "Enter coefficients a, b, and c for the quadratic equation (ax^2 + bx + c): ";
    // cin >> a >> b >> c;
    // discriminant = b * b - 4 * a * c;
    // if (discriminant > 0) {
    //     cout << "The roots are real and distinct." << endl;
    // } else if (discriminant == 0) {
    //     cout << "The roots are real and equal." << endl;
    // } else {
    //     cout << "The roots are imaginary." << endl;
    // }


    // int age;
    // float bmi;

    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "Enter your BMI: ";
    // cin >> bmi;

    // if (age < 18) {
    //     cout << "You are not eligible for a gym membership." << endl;
    // } else if (age >= 18 && age < 30) {
    //     cout << "You are eligible for the Teen Plan." << endl;
    // } else if (age >= 18 && bmi >= 25) {
    //     cout << "You are eligible for the Weight Loss Plan." << endl;
    // } else if (age >= 18 && bmi < 25) {
    //     cout << "You are eligible for the Standard Plan." << endl;
    // }


    // int theoryMarks, practicalMarks;
    // cout << "Enter the theory marks: ";
    // cin >> theoryMarks;
    // cout << "Enter the practical marks: ";
    // cin >> practicalMarks;
    // if (theoryMarks >= 40 && practicalMarks >= 50) {
    //     cout << "Passed" << endl;
    // } else {
    //     cout << "Failed" << endl;
    // }


    // int units;
    // float bill;
    // cout << "Enter the number of units consumed: ";
    // cin >> units;
    // if (units <= 100) {
    //     bill = units * 5;
    // } else if (units <= 300) {
    //     bill = (100 * 5) + ((units - 100) * 8);
    // } else {
    //     bill = (100 * 5) + (200 * 8) + ((units - 300) * 10);
    // }
    // cout << "The total electricity bill is: ₹" << bill << endl;


    // int year;
    // cout << "Enter a year: ";
    // cin >> year;
    // if (year % 100 == 0) {
    //     cout << "The year " << year << " is a Century Year." << endl;
    // } else {
    //     cout << "The year " << year << " is not a Century Year." << endl;
    // }
    // if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    //     cout << "The year " << year << " is a Leap Year." << endl;
    // } else {
    //     cout << "The year " << year << " is not a Leap Year." << endl;
    // }


    // char ch;
    // cout << "Enter a character: ";
    // cin >> ch;
    // if (ch >= '0' && ch <= '9') {
    //     cout << "The character is a digit." << endl;
    // } else if (ch >= 'A' && ch <= 'Z') {
    //     cout << "The character is an uppercase letter." << endl;
    // } else if (ch >= 'a' && ch <= 'z') {
    //     cout << "The character is a lowercase letter." << endl;
    // } else {
    //     cout << "The character is a special character." << endl;
    // }


    //  float salary, finalSalary, bonus = 0, tax = 0;
    // int yearsOfExperience;
    // cout << "Enter the employee's salary: ₹";
    // cin >> salary;
    // cout << "Enter the years of experience: ";
    // cin >> yearsOfExperience;
    // if (yearsOfExperience >= 10) {
    //     bonus = salary * 0.10;
    // }
    // if (salary > 50000) {
    //     tax = salary * 0.05; 
    // }
    // finalSalary = salary + bonus - tax;
    // cout << "Final salary after deductions and bonuses: ₹" << finalSalary << endl;


    // float weight, height, bmi;
    // cout << "Enter your weight (in kg): ";
    // cin >> weight;
    // cout << "Enter your height (in meters): ";
    // cin >> height;
    // bmi = weight / (height * height); 
    // cout << "Your BMI is: " << bmi << endl;
    // if (bmi < 18.5) {
    //     cout << "Category: Underweight" << endl;
    // } else if (bmi >= 18.5 && bmi <= 24.9) {
    //     cout << "Category: Normal weight" << endl;
    // } else if (bmi >= 25 && bmi <= 29.9) {
    //     cout << "Category: Overweight" << endl;
    // } else {
    //     cout << "Category: Obese" << endl;
    // }


    // float distance, fare;
    // cout << "Enter the distance traveled (in km): ";
    // cin >> distance;
    // if (distance <= 10) {
    //     fare = distance * 8; 
    // } else if (distance <= 50) {
    //     fare = (10 * 8) + ((distance - 10) * 6); 
    // } else {
    //     fare = (10 * 8) + (40 * 6) + ((distance - 50) * 5); 
    // }
    // cout << "Total fare for the distance traveled: ₹" << fare << endl;


    // int balance, withdrawal;
    // cout << "Enter your current balance: ₹";
    // cin >> balance;
    // cout << "Enter the amount you want to withdraw: ₹";
    // cin >> withdrawal;
    // if (withdrawal % 100 == 0 && (balance - withdrawal) >= 500) {
    //     balance -= withdrawal; 
    //     cout << "Transaction successful!" << endl;
    //     cout << "Your new balance is: ₹" << balance << endl;
    // } else {
    //     if (withdrawal % 100 != 0) {
    //         cout << "Error: Withdrawal amount must be a multiple of ₹100." << endl;
    //     }
    //     if ((balance - withdrawal) < 500) {
    //         cout << "Error: Minimum balance of ₹500 must be maintained." << endl;
    //     }
    // }


    int marks;
    float attendance;
    cout << "Enter the student's marks: ";
    cin >> marks;
    cout << "Enter the student's attendance percentage: ";
    cin >> attendance;
    if (marks >= 90 && attendance >= 75) {
        cout << "Grade: A" << endl;
    } else if (marks >= 75 && attendance >= 60) {
        cout << "Grade: B" << endl;
    } else if (marks >= 50 && attendance >= 50) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: Fail" << endl;
    }


}
