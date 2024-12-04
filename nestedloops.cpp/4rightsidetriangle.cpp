#include <iostream>
using namespace std;

int main(){
 
for(int i=1;i<=5;i++){           
    for(int j=5;j>=i;j--){
    cout<<"  ";                        // the space decide's the output
}for(int k=1;k<=i;k++){
    cout<<" $";                         //the space decide's the output
}
    cout<<"\n";
}
    return 0;

}