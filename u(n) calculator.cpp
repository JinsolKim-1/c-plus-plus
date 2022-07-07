#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    int size_of_value;
    cout << "How many times you want to run the program?" << endl;
    cin >> size_of_value;

    for(int i = 0; i<size_of_value; i++)
    {
        int N, zeroth=1, first=1, second;

        cout << "Enter in an integer N: " << flush;
        cin >> N;

        if(N==0)
            cout << "u(" << N << ") = " << zeroth << endl << endl;
        else if (N==1)
            cout << "u(" << N << ") = " << first << endl << endl;
        else if (N>1)
        {
            for(int x = 1; x<=N; x++)
            {
                second = first +(x+1);
                zeroth = first;
                first = second;
            }

            cout << "u(" << N << ") = " << second <<  endl << endl;
        }


    }
    
    cin.get();
}