// Q9 Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the Character = ";
    cin>>ch;
    if(ch>='A' &&ch<= 'z'){
        cout<<"Character is Alphabet ";
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"Character is number  ";
    }
    else {
        cout<<"Character is special Character ";
    }
}