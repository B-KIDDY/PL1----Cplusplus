#include <iostream>
using namespace std;

int main() {

    char op;
    double num1, num2, result;

    cout<<"enter either (- + * / ): ";
    cin>>op;

    cout<<"enter the first number : ";
    cin>>num1;

    cout<<"enter the second number : ";
    cin>>num2;

    switch (op){
          case '-':
          result=num1-num2;
          cout<<"result:"<<result<<'\n';
          break;

          case '+':
          result=num1+num2;
          cout<<"result:"<<result<<'\n';
          break;

          case '*':
          result=num1*num2;
          cout<<"result:"<<result<<'\n';
          break;

          case '/':
          result=num1/num2;
          cout<<"result:"<<result<<'\n';
          break;

          default:
          cout<<"please enter a valid operator\n";
          break;
    }

    return 0;
}