#include <iostream>
using namespace std;
int main()
{
int firstNumber, secondNumber,thirdNumber, sumOfNumbers; //code is being updated to print sum of 3 instead of 2 (edited by Daksh)
cout << "Enter three integers: ";
cin >> firstNumber >> secondNumber >>thirdNumber;
// sum of THREE numbers in stored in variable sumOfTwoNumbers
sumOfNumbers = firstNumber + secondNumber+thirdNumber;
// Prints sum
cout << firstNumber << " + " << secondNumber <<" + " << thirdNumber << " = " << sumOfNumbers<<endl;
  //I AM DEVANSH. I AM APPENDING A CODE THAT TAKES 4 ARRAY ELEMENTS AS INPUT AND THEN PRINTS THEIR SUM !!!!!!!!
  int arr[4];
  int sum=0;
  int product=1; // I am adding product also (edited by Daksh)
  cout<<"Enter 4 elements to sum up:"<<endl;
  for(int i=0;i<=3;i++)
  {
    cin>>arr[i];
    sum=sum+arr[i];
    product *= arr[i];
    
  }
  cout<<"Sum of the entered elements is: "<<sum<<endl;
  cout<<"Product of the entered elements is: "<<product<<endl;
return 0;
}
