#include <iostream>
using namespace std;

int main(){

double y_length,y_width,y_area,h_length,h_width,h_area,area_x;
double rate=2;
double time;

cout<<"enter the length and width of the rectangular yard :";
cin>>y_length>>y_width;//Here, enter two numbers(length and width) separated by a space

cout<<"enter the length and width of the rectangular house :";
cin>>h_length>>h_width;

y_area = y_length*y_width;
h_area = h_length*h_width;
area_x = y_area - h_area;

time=area_x/rate;
cout<<"time taken to be moved : "<<time<<"\n";

    return 0;
}