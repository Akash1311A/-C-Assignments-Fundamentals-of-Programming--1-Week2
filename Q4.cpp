// Q4 Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length = ";
    cin>>l;
    cout<<"Enter the breadth = ";
    cin>>b;
    int area  = l+b;
    int perimeter = 2*(l+b);
    if(area>perimeter){
        cout<<" area is greater than its perimeter ";
    }
    else if(area == perimeter ){
        cout<<"area of reactanle is Equal to its perimeter ";
    }
    else {
        cout<<"perimeter is greater than the area of rectangle";
    }

}