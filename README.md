# Lesson 0x01 Exercises

## Exercise 0x00
Implement a program taking two integers as input

And that writes to output:
_if_
`The first is greater than the second` (if that is the case!)
_else if_
`The second is greater than the first` (if that is the case!)
_else_
`The numbers are equal`

The program should additionally write the sum and the product of the numbers to output

## Exercise 0x01

Implement a program that prompts the user to input an integer, and subsequently determines the numbers sign and parity (even or odd). The program should present the following output:
 - `The number is positive and even.`
 - `The number is positive and odd.`
 - `The number is negative and even.`
 - `The number is negative and odd.`
 - `The number is zero.`

Depending on the number of course

> **Hint** Nested if statement can be used here.
To test an integer for parity, use the modulus operator $\bmod$ (`%`), which gives the remainder in division. That is $7 \bmod 3 = 1$ because the remainder is $1$,  $23 \bmod 3=2$ because the remainder $2$. In this way $x \bmod 2 == 0$ if $x$ is even, and $x \bmod 2 \neq 0$ if $x$ is odd.

## Exercise 0x02
Implement a program that asks the user to input current (milliAmpere) and resistance (Ohm). 

Assume that the resistor is connected to a battery. Write the voltage over the resistor in Volts and the dissipated effect in Watts to the output.

## Exercise 0x03
Implement a program where the user inputs two 3d vectors $(x_1,x_2,x_3)$ $(y_1,y_2,y_3)$
And the result an output to the user of the distance between the two vectors

## Exercise 0x04
Implement a program that solves two linear equations with two unknowns IF there exists a unique solution.


$a_{11}x + a_{12}y = c_1$

$a_{21}x + a_{22}y = c_2$

First the program writes:  ”input the matrix values in order  $a_{11} a_{12} a_{21} a_{22}$”
1. Read these values into the program. 
2. Write immediately to the user whether a unique solution exists. 
3. IF NOT terminate the program 
4. ELSE Prompt the user with: ”input the values $c_1$ $c_2$”
5. Read these values from the input 
6. Present the solution to the user.