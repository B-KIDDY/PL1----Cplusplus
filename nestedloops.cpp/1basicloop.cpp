#include <iostream>
using namespace std;

int main(){
for(int i =1;i<=5;i++){              //start,stop,step............
    cout<<"@";                       //firstly- outer loop print @ then get into the inner loop
    for(int j=3;j>1;j--){     //secondly- it print the lubyou twice 
    cout<<"lubyou" ;}

    cout<<"\n";                      //here we use the cout for the print the row by row .............
}                                    //thirdly- get out from the inner loop and print the \n of the outer loop
    return 0;                        //then it will print the first row @lubyoulubyou,then it will go back to the outer loop as repeat.
}
/*

get the output,,see the magic.......................

*/
