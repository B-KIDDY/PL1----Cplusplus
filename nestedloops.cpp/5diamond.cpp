#include <iostream>
using namespace std;

int main(){
 
for(int i=1;i<=5;i++){           
    for(int j=5;j>=i;j--){
    cout<<" ";                        // the space decide's the output
}for(int k=1;k<=i;k++){
    cout<<" $";                         //the space decide's the output 
}
    cout<<"\n";
}
for(int i=1;i<=5;i++){           
    for(int j=1;j<=i;j++){
    cout<<" ";                        // the space decide's the output
}for(int k=5;k>=i;k--){
    cout<<" $";                         //the space decide's the output
}
    cout<<"\n";
}
    return 0;

}

/* 
here the space play a major role,because space will decides the output of the program........................

get the output and see the magic.....

*/