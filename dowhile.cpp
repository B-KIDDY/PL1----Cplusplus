#include <iostream>

int main(){
using namespace std;

int a;
int b;

do{
cout<<"enter your first number:\n";
cin>>a;

cout<<"enter the second number\n";
cin>>b;

if(a<=b){
    cout<<"w\n";
}
else{
    cout<<"nop\n";
}
}while(!(a<=b));

    return 0;
    }