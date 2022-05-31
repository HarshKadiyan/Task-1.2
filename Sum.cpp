#include <iostream>
using namespace std;
int main()
{
int firstNumber, secondNumber,thirdNumber, sumOfNumbers; //code is being updated to print sum of 3 instead of 2
cout << "Enter three integers: ";
cin >> firstNumber >> secondNumber >>thirdNumber;
// sum of THREE numbers in stored in variable sumOfTwoNumbers
sumOfNumbers = firstNumber + secondNumber+thirdNumber;
// Prints sum
cout << firstNumber << " + " << secondNumber <<" + " << thirdNumber << " = " << sumOfNumbers;
return 0;
}