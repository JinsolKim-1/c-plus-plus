#include <iostream>
#include <string>
using namespace std;

int main()
{
    double numbers[20];
    double total = 0;
    double min = 9999999;
    double max = 0;

    for(int i = 0; i < 20; i++){
        cout << "enter number " << to_string(i+1) << ": ";
        cin >> numbers[i];
        total += numbers[i];
        
        if(numbers[i] < min){
            min = numbers[i];
        }
        
        if(numbers[i] > max){
            max = numbers[i];
        }
    } 


    cout << "average: " << to_string(total / 20) << endl;
    cout << "sum: " << to_string(total) << endl;
    cout << "min: " << to_string(min) << endl;
    cout << "max: " << to_string(max) << endl;
    return 0;
    
}