// Q2 Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.
#include<iostream>
using namespace std;
int main(){
    float  r;
    float pai = 3.141;
    cout<<"Enter the radius = ";
    cin>>r;
    float area = pai *r*r;
    float circum=2*pai *r ;
    if(area >circum){
        cout<<"Area is grater than its circumfrance  ";
    }
    else {
        cout<<"circumfrance is greter than its area ";
    }

}