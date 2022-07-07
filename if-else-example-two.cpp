#include <iostream>
using namespace std;

int main()
{

    int num;
    
    cout << "enter integer: " << endl;
    cin >> num ;

    if (num <= 100)
    {
        cout << "OK" << endl;
    }
    
    else 
    {
        cout << "Out of range" << endl;
    }

    return 0;
}