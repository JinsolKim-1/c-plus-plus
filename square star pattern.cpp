#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "enter a positive integer: ";
    cin >> a;


    if(a >= 1){
        for(int i = 0 ; i < a; i++){
            for(int x = 0 ; x < a; x++){
                cout << "*";
            }
            cout << endl;
        }
        return 0;
    }

    cout << "nothing";

    return 0;        

}