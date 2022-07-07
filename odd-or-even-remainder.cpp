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

    k = i%j;

     if (i%j==0)
     {
       cout << "remainder: "<< k << "\n" << "even";
    }
    else 
    { 
        cout << "remainder: "<< k << "\n" << "odd";
    }
    

    return 0;
}