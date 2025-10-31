#include<iostream>
#include<string>
using namespace std;
int main()
{
string password;
while(true) // Infinite loop to keep asking for password until correct so we use while(true)
{
    cout<<"Enter the Password: ";
    cin>>password;
    if(password=="Python123")
    {
        cout<<"Access Granted"<<endl;
        break;// Exit the loop if the password is correct as without break u\it will keep asking for password.
    }
    else
    {
        cout<<"Access Denied. Try Again."<<endl;
}
}
return 0;
}
