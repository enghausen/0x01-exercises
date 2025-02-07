/* Implement a program that solves two linear equations with two unknowns IF there exists a unique solution.
$a_{11}x + a_{12}y = c_1$
$a_{21}x + a_{22}y = c_2$
First the program writes:  ”Input the matrix values in order  $a_{11} a_{12} a_{21} a_{22}$”
1. Read these values into the program. 
2. Write immediately to the user whether a unique solution exists. 
3. IF NOT terminate the program 
4. ELSE Prompt the user with: ”input the values $c_1$ $c_2$”
5. Read these values from the input 
6. Present the solution to the user. */

#include <iostream>

using namespace std;

int main() {
  cout << "exercise_4.cpp" << endl;

  double a11, a12, a21, a22;
  cout << "Input the matrix values in order a11 a12 a21 a22: ";
  cin >> a11 >> a12 >> a21 >> a22;

  // Beregn determinanten
  double determinant = a11 * a22 - a12 * a21;

  // Tjek om en unik løsning eksisterer
  if (determinant == 0) {
    cout << "No unique solution exists." << endl;
    return 0;
  } else {
    double c1, c2;
    cout << "Input the values c1 c2: ";
    cin >> c1 >> c2;

    // Beregn løsningen ved hjælp af Cramers regel
    double x = (c1 * a22 - c2 * a12) / determinant;
    double y = (c2 * a11 - c1 * a21) / determinant;
    cout << "The solution is x = " << x << ", y = " << y << endl;
  }

  return 0;
}