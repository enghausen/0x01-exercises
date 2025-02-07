/* Implement a program that asks the user to input current (milliAmpere) and resistance (Ohm). 
Assume that the resistor is connected to a battery. Write the voltage over the resistor in Volts and the dissipated effect in Watts to the output. */

#include <iostream>

using namespace std;

int main() {
  cout << "exercise_2.cpp" << endl;

  double current, resistance;
  cout << "Enter the current in milliAmpere: ";
  cin >> current;
  cout << "Enter the resistance in Ohm: ";
  cin >> resistance;
  cout << "Voltage over the resistor: " << current * resistance / 1000 << " V" << endl;
  cout << "Dissipated effect: " << current * current * resistance / 1000000 << " W" << endl;

  return 0;
}
