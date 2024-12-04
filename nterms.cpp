#include <iostream>
using namespace std;

int main()
{
 int i,n,sum;

 cout<<"enter the number of terms : \n";
 cin>>n;
 
 cout<<"the natural numbers upto "<<n<<"th terms are :";

 for(i=1;i<=n;i++){
cout<<i<<"\t";
 
sum = sum + i;
 }
cout<<"\nthe sum of the natural numbers is: "<<sum<<"\n";

    return 0;
}