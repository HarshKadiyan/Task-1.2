#include <iostream>
using namespace std;
int main()
{
int firstNumber, secondNumber, sumOfTwoNumbers;
cout << "Enter two integers: ";
cin >> firstNumber >> secondNumber;
// sum of two numbers in stored in variable sumOfTwoNumbers
sumOfTwoNumbers = firstNumber + secondNumber;
// Prints sum
cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers<< endl;
  //I AM DEVANSH. I AM APPENDING A CODE THAT TAKES 4 ARRAY ELEMENTS AS INPUT AND THEN PRINTS THEIR SUM !!!!!!!!
  int arr[4];
  int sum=0;
  cout<<"Enter 4 elements to sum up:"<<endl;
  for(int i=0;i<=3;i++)
  {
    cin>>arr[i];
    sum=sum+arr[i];
    
  }
  cout<<"Sum of the entered elements is: "<<sum<<endl;
return 0;
}
