//user input with getline() function
#include<iostream>
using namespace std;
int main()
{
    string Name;
    cout<<"Type your fullname: ";
    getline(cin,Name);
    cout<<"Your Name is "<<Name;

    return 0;
}