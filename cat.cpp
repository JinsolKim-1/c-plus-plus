#include <iostream>
using namespace std;

void DrawCircle()
{
    cout << "       ***     " << endl;
    cout << "   *         *  " << endl;
    cout << "*   ^       ^   * " << endl; 
    cout << "*   o   M   o   * " << endl; 
    cout << " *  =   |   =  * " << endl;
    cout << "   *    w    *  " << endl;
    cout << "       ***    " << endl;

    return;
}

void PrintParallel() 
{
    cout << "   |ooooooooo|" << endl;
    cout << "   |    \3    |" << endl;
    cout << "   |   cat   |" << endl; 
    cout << "   |         |" << endl; 
    cout << "   |         |" << endl; 

    return; 
}

void PrintIntersecting() 
{
    cout << "    $       $ " << endl; 
    cout << "  $   $   $   $" << endl; 
    cout << " $             $  " << endl; 

    return; 
}

void PrintHorizontal() 
{
    cout << "   -----------" << endl; 
    return; 
}

int main() 
{
    
    PrintIntersecting(); 
    DrawCircle();
    PrintHorizontal(); 
    PrintParallel(); 
    PrintHorizontal();

    return 0;

}
