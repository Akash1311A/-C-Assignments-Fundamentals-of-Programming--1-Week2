// Q5 Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter sides of Traingle :- "<<endl;
    cin>>x>>y>>z;
    if(x==y&&y==z&&z==x){
        cout<<"This  is equilateral Traingle ";
    }
    else if(x==y||y==z||z==x)
    cout<<"This is a scalene Traingle ";
    else{
        cout<<"This is a isosceles Traingle ";
    }
}