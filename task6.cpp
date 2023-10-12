#include<iostream>
using namespace std;
void checkAlphabetCase(char a);
main(){
    cout<<"Enter a character (A/a): ";
    char a;
    cin>>a;
    checkAlphabetCase(a);
}
void checkAlphabetCase(char a){
    if(
        a=='a')
    {    cout<<"You have entered small "<<a;
    }
    if(a=='A'){
        cout<<"You have entered Capital "<<a;
    }
    
}