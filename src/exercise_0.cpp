// Implement a program taking two integers as input
// And that writes to output: if The first is greater than the second (if that is the case!) else if The second is greater than the first (if that is the case!) else The numbers are equal
// The program should additionally write the sum and the product of the numbers to output

#include <iostream>

using namespace std;

int main()
{
  cout << "exercise_0.cpp" << endl;

  int a, b;
  cout << "Enter first integer: " << endl;
  cin >> a;
  cout << "Enter second integer: " << endl;
  cin >> b;
  if (a > b)
  {
    cout << "The first is greater than the second" << endl;
  }
  else if (b > a)
  {
    cout << "The second is greater than the first" << endl;
  }
  else
  {
    cout << "The numbers are equal" << endl;
  }
  return 0;
}