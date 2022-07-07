#include <iostream>
#include <string>
using namespace std;

int main(){

    string asterisk;
    string spaces;
    int num;
    int limiter = 0;
    cout << "enter a number: ";
    cin >> num;

    for(int i = 0; i < num; i++){
        spaces = "";
        for(int j = limiter; j < num; j++){
            spaces += " ";
        }
        asterisk += "*";
        cout << spaces << asterisk << endl;
        limiter++;
    }  
    limiter = 1;
    spaces = " ";
    for(int k = 0; k < num; k++){
        asterisk = "";
        for(int a = limiter; a < num; a++){
            asterisk += "*";
        }
        spaces += " ";
        cout << spaces << asterisk << endl;
        limiter++;
    }  


    return 0;
}
