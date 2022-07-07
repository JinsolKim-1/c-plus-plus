#include <iostream>
using namespace std;


void printFibonacci(int n)
{    
    int n1=0,n2=1,n3;
    cout<<n1<<" "<<n2<<" "; //printing 0 and 1    
    for(int i=2;i<n;++i) //loop starts from 2 because 0 and 1 are already printed    
    {    
        n3=n1+n2;    
        cout<<n3<<" ";    
        n1=n2;    
        n2=n3;    
    }    
}    

int getUserInput(){
    int user_choice;
    cout << "\nFibonacci Sequence Automation\n";
    cout << "[1]Enter a number of elements\n";
    cout << "[2]Exit Program";
    cout << "\nEnter your choice: ";
    cin >> user_choice;
    return user_choice;
}

int main()
{
    int start_choice;
    int length_of_sequence; 
    char end_choice;
    while(true){
        start_choice = getUserInput();

        if(start_choice == 1){
            while(true){
                cout<<"\nEnter the number of elements: ";
                cin >> length_of_sequence;

                if(length_of_sequence != 0){
                    printFibonacci(length_of_sequence);

                    while(true)
                    {
                        cout << "\nDo you want to enter another number(y/n)\n";
                        cin >> end_choice;
                        
                        if(end_choice == 'y' || end_choice == 'Y' || end_choice == 'n' || end_choice == 'N'){
                            break;
                        }
                        else{
                            cout << "Please Enter A Valid Answer!" << endl;
                            cin.clear();    
                            cin.ignore(100, '\n');
                            continue;
                        }
                    }       
                    
                    if(end_choice == 'y' || end_choice == 'Y'){
                        continue; 
                    }else{
                        cout << "Thank you for using this program.";
                        return false;
                    }



                }else{
                    cin.clear();    
                    cin.ignore(100, '\n');
                    cout << "\n\nPLEASE ENTER A VALID NUMBER!" << endl;
                    continue;
                }
            }
           



        }else if(start_choice == 2){
            break; 
        }else{
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\n\nOPTION DOESN'T EXIST!" << endl;
            cout << "PLEASE TRY AGAIN!" << endl;
            continue;
        }

    }

    return 0;
}