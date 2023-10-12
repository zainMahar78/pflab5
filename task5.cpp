#include<iostream>
#include<cmath>
using namespace std;
void determinant(float a, float b, float c);
main(){
    float a, b , c ;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    determinant(a,b,c);
   
}
void determinant(float a, float b, float c){
    float detreminant, root1, root1a, root2,root2a,root3,root4,root4a;
    detreminant=pow(b,2)-(4*a*c);


    if(detreminant>0){
        root1=(-1*b)+sqrt(detreminant);
    root1a=root1/(2*a);
    root2=(-1*b)-sqrt(detreminant);
    root2a=root2/(2*a);

cout<<"Solutions: x= "<<root1a<<" and x= "<<root2a;
    }
    if(detreminant==0){        
        root3=-1*b/(2*a);
        cout<<"Solution: x= "<<root3;
    }
    if(detreminant<0)
    {    root4=sqrt(abs(detreminant));
    root4a=root4/2*a;
        cout<<"Complex Solution: x= "<<root3<<" + "<<root4a<<"i and x= "<<root3<<" - "<<root4a<<"i";
    }
}