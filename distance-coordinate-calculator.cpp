#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    int b;

    
    cout<<"input coordinate A: ";
    cin >> a;
    cout<<"input coordinate B: ";
    cin >> b;
    
    int result = abs(a-b);
    cout<<result<< endl;

    return 0;
}