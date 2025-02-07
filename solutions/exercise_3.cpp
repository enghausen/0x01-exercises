/* Implement a program where the user inputs two 3D vectors $(x_1,x_2,x_3)$ $(y_1,y_2,y_3)$
And the result an output to the user of the distance between the two vectors */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  cout << "exercise_3.cpp" << endl;

  double x1, y1, z1, x2, y2, z2;
  cout << "Enter the first vector (x1 y1 z1): ";
  cin >> x1 >> y1 >> z1;
  cout << "Enter the second vector (x2 y2 z2): ";
  cin >> x2 >> y2 >> z2;

  double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));

  cout << "The distance between the two vectors is: " << distance << endl;

  return 0;
}