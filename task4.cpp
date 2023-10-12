#include<iostream>
#include<cmath>
using namespace std;
float height(float d, float a);
main(){
    float d, a;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin>>d;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>a;
    height(d,a);
}
float height(float d, float a){
    float h;
    h=tan(1/57.2958*a)*d;
    cout<<"The height of the tree is: "<<h<<" feet";
} 