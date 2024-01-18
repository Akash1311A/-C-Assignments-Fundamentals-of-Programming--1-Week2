// Q1 Take 2 integers input and print the greatest of them
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter First Number = ";
    cin>>x;
    cout<<"Enter second Number = ";
    cin>>y;
    if(x>y){
        cout<<" First Numbe "<<x<<" is gratest number ";
    }
    else if (x==y)
    {
        cout<<"Both Number is Equal ";
    }
    
    else cout<<"Second  Number " <<y<< "is a gretest Number ";
}