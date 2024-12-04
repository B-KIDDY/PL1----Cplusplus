#include <iostream>
using namespace std;

int main(){

int n;

cout<<"enter the number : \n";
cin>>n;

cout<<"n\tT Number\n";

for(int i=1;i<=n;i++){
   int triangularNumber=i*(i+1)/2;//here we use the triangular number general formula n(n+1)/2.
    cout<<i<<"\t"<<triangularNumber<<endl;
   }

    return 0;
}