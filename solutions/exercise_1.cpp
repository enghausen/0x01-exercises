/* Implement a program that prompts the user to input an integer, and subsequently determines the numbers sign and parity (even or odd). The program should present the following output:
The number is positive and even.
The number is positive and odd.
The number is negative and even.
The number is negative and odd.
The number is zero.
Depending on the number of course
Hint Nested if statement can be used here. To test an integer for parity, use the modulus operator mod (%), which gives the remainder in division. That is 7 mod 3 = 1 because the remainder is 1 , 23 mod 3 = 2 because the remainder 2 . In this way x mod 2 == 0 if x is even, and x mod 2 ≠ 0 if x is odd. */

#include <iostream>

using namespace std;

int main() {
  cout << "exercise_1.cpp" << endl;

  int number;
  cout << "Enter an integer: ";
  cin >> number;

  if (number > 0) {
    if (number % 2 == 0) {
      cout << "The number is positive and even." << endl;
    } else {
      cout << "The number is positive and odd." << endl;
    }
  } else if (number < 0) {
    if (number % 2 == 0) {
      cout << "The number is negative and even." << endl;
    } else {
      cout << "The number is negative and odd." << endl;
    }
  } else {
    cout << "The number is zero." << endl;
  }

  return 0;
}