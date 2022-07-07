#include <iostream>
using namespace std;

void PrintParallel() 
{
    cout << "|         |" << endl;
    cout << "|         |" << endl;
    cout << "|         |" << endl; 
    cout << "|         |" << endl; 
    cout << "|         |" << endl; 

    return; 
}

void PrintIntersecting() 
{
    cout << "     $    " << endl; 
    cout << "   $   $ " << endl; 
    cout << "  $     $ " << endl; 
    cout << " $       $ " << endl; 
    cout << "$         $ " << endl; 

    return; 
}

void PrintHorizontal() 
{
    cout << "-----------" << endl; 
    return; 
}

int main() 
{
    
    PrintIntersecting(); 
    PrintHorizontal(); 
    PrintParallel(); 
    PrintHorizontal();
    system("pause");

    return 0;
}

