// write a program that asks the user to type the width and height of rectangle and then outputs to the screen the area and the perimeter of that rectangle

#include <iostream>
using namespace std;

int main ()
{
    int height;
    int width;
    
    cout<<"Enter height: ";
    cin>>height;

    cout<<"Enter width: ";
    cin>>width;

    cout<<(height+width)*2 << endl; 
    
    system("pause");

    return 0;
}