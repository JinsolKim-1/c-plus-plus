#include <iostream>
using namespace std;

int main()
{
    char x;

    cout << "enter character: " << endl;
    cin >> x;   

    switch (x)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "you have input " << x << " and " << x << " is vowel" << endl;
            break;
        default: cout << "you have input " << x << " and " << x << " is a consonant" << endl;
        break;
    
    }

    return 0;
}