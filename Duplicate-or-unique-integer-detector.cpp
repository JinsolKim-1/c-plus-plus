#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e; 
    

    cout << "enter 5 numbers: " << endl;
    cin >> a >> b >> c >> d >> e;

   

    if(a==b || a==c || a==d || a==e 
        || b==a || b==c || b==d || b==e)
    {
        cout << "DUPLICATES" << endl;

    }

    else 
    {
        cout << "ALL UNIQUE" << endl;
    }

    
    return 0;
}