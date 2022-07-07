#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;
    double z;

    int i;
    int j;
    int k;
    int h;

    cout << "enter x: ";
    cin >> x;

    cout << "enter y: ";
    cin >> y;

    z = x / y;
    cout << "value of variable z is: " << z << endl;
    
    cout << "enter i: ";
    cin >> i;

    cout << "enter j: ";
    cin >> j;

    k = i / j;
    cout << "value of int variable k is: " << k << endl;

    h = i % j;
    cout << "remainder is: " << h << endl;

    return 0;
}