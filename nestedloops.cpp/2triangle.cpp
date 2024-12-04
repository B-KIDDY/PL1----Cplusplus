#include <iostream>
using namespace std;

int main(){
 
for(int i=1;i<=5;i++){           
    for(int j=1;j<=i;j++){
        cout<<"&";
    }
    cout<<"\n";
} 
    return 0;

}


 /*firstly outer loop i(row)=1 then,get into the inner loop checks that j<=i(coloum),therfore i=1 ,then it prints ...."&"....
 because j<=i and i=1 ......more information check the phone's gallery.
 */