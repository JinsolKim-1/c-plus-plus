#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0; 
    int maximum = 0;
    int minimum = 0;

    cout << "enter 5 numbers: " << endl;
    cin >> a >> b >> c >> d >> e;

    maximum = a;
    
   if (b > maximum)
    {
        maximum = b;
    }
    
    if (c > maximum)
    {
        maximum = c;
    }

    if (d > maximum)
    {
        maximum = d;
    }

    if (e > maximum)
    {
        maximum = e;
    }

    minimum = a;

    if (b < minimum)
    {
        minimum = b;
    }
    
    if (c < minimum)
    {
        minimum = c;
    }

    if (d < minimum)
    {
        minimum = d;
    }

    if (e < minimum)
    {
        minimum = e;
    }

    cout << " the maximum value is: " << maximum << endl;

    cout << "the minimum value is: " << minimum << endl;

    return 0;
}