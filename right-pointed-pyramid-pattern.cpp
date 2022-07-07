#include <iostream>
#include <string>
using namespace std;

int main(){

    string curr_string;
    int n = 0;
    cout << "enter number of asterisk: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        curr_string += "*";
        cout << curr_string << endl;
    }

    for(int j = n - 1; j > 0; j--){
        for(int k = j; k > 0; k--){
            cout << "*"; 
        }
        cout << endl;
    }

    return 0;
}
