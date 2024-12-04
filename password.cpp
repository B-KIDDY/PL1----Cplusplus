#include <iostream>
#include <string>
using namespace std;

int main(){

    string id, password;

  do
   { cout<<"enter the id\n";
    cin>>id;

    cout<<"enter the password\n";
    cin>>password;

    if(id=="Ali" and password=="Ali123")
    {cout<<"WELCOME\n";
    } 
    else{
        cout<<"INVALID ID OR PASSWORD\n";
    }      
   }
   while(!(id=="Ali" and password=="Ali123"));

    return 0;
}