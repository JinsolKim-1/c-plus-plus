#include <iostream>
using namespace std;

int main()
{
  int decimalNum;
  int binaryNum=0;
  int mul=1;
  int rem;

  cout << "Enter decimal number: ";
  cin >> decimalNum;

  while (decimalNum>0)
  {
    rem=decimalNum%2;
    binaryNum=binaryNum+(rem*mul);
    mul=mul*10;
    decimalNum=decimalNum/2;

  }

  cout << "\nequivalent binary value: " << binaryNum;
  
  return 0;

}