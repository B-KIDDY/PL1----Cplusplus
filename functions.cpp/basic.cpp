#include <iostream>
using namespace std;

void bhagath(string name,int age){                  //parameters
    cout<<"your name is "<< name ;
    cout <<"\nyour age is "<<age ;
}
int main()
{
    string name;
    int age;
    
   cout <<"enter your name: ";
   cin>>name;
   
   cout <<"enter your age: ";
   cin>>age;
   
   bhagath(name,age);                            //arguments
   

    return 0;
}
