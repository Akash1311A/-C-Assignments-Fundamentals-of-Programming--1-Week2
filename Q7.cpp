// Q7 Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include<iostream>
using namespace std;
int main(){
    float x, y;
    cout<<"Enter the Two Coordinates  = ";
    cin>>x>>y;
    cout<<"the Point is =""("<<x<<","<<y<<")"<<endl;
   if (x==0 && y!=0){
    cout<<"And The Point is lies on  Y-axis ";
   }
   else if(x!=0&&y==0){
    cout<<"And The Point is lies on X-axis ";
   }
   else if(x==0&&y==0){
    cout<<"And The point is lies at Origin";
   }
   else{
    cout<<"And The Point is lies on xy-axis(plane )";
   }
}