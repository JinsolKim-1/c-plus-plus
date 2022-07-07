// write a program that asks the user to type 2 integers A and B and exhange the value of A and B

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout << "enter A number: ";
    cin>>a;
    cout << "enter B number: ";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<a<<" "<<b;

    return 0;
}