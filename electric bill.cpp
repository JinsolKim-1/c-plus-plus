#include <iostream>
using namespace std;

int main ()
{
    int consumpt;
    int temp;
    float charge,surcharge=0,gramt,netcharge;

    cout << "input electricity consumption: " << endl;
    cin >> consumpt;

    if (consumpt <= 30)
        {
            charge = 7.50;
            temp = 1;
        }

    else if (consumpt >30 && consumpt < 100)
        {
            charge = 8.79;
            temp = 2;
        }

    else if (consumpt >= 100)
        {
            charge = 9.79;
            temp = 3;
        }
    
    gramt = consumpt * charge;
    surcharge = gramt * 7/100;
    netcharge = gramt + surcharge;


    switch (temp)
    {
        case 1:
        gramt = consumpt * charge;
        surcharge = gramt * 7/100;
        netcharge = gramt + surcharge;
        cout << netcharge <<  endl;
        break;

        case 2:
        gramt = consumpt * charge;
        surcharge = gramt * 7/100;
        netcharge = gramt + surcharge;
        cout << netcharge <<  endl;
        break;

        case 3:
        gramt = consumpt * charge;
        surcharge = gramt * 7/100;
        netcharge = gramt + surcharge;
        cout << netcharge <<  endl;
        break;
    }

 return 0;
}