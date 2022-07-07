#include <iostream>
#include <string>
using namespace std;

int main()
{   
    string name;
    string course;
    string gender;
    string age;
    string address;
    string email;
    string school;
    string subject;
    
    cout<<"enter your name: ";
    getline(cin, name);
    cout<<"enter your course: ";
    getline(cin, course);
    cout<<"enter your gender: ";
    getline(cin, gender);
    cout<<"enter your age: ";
    getline(cin, age);
    cout<<"enter your address: ";
    getline(cin, address);
    cout<<"enter your email address: ";
    getline(cin, email);
    cout<<"enter your school: ";
    getline(cin, school);
    cout<<"enter your subject: ";
    getline(cin, subject);
    
    cout <<"----------------BIODATA----------------" << endl;
    cout <<"name          : "<<name << endl;
    cout <<"course        : " <<course << endl;
    cout <<"gender        : " <<gender<< endl;
    cout <<"age           : " <<age<< endl;
    cout <<"address       : " <<address<< endl;
    cout <<"email address : " <<email<< endl;
    cout <<"school        : " <<school<< endl;
    cout <<"subject       : " <<subject<< endl;
    cout <<"---------------------------------------" << endl;
    system("pause");
    

    return 0;
}
