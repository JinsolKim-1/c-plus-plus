#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int k;

    cout << "get value i: " << endl;
    cin >> i;

    cout << "get value j: " << endl;
    cin >> j; 

    //k = i%j;
     if (i%j==0)
     {
       cout << "evenly divisible";
    }
    else 
    { 
        cout << "not evenly divisible";
    }
    

    return 0;
    }