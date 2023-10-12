#include<iostream>
using namespace std;
string oddeven(int n1);
main(){
    cout<<"Enter a five-digit number: ";
    int number;
    cin>>number;
    string result;
    result=oddeven(number);
    cout<<result;
    return 0;
}
string oddeven(int n1){
int dig1,dig2,dig3,dig4,dig5,sum;
dig1=n1%10;
n1/=10;
dig2=n1%10;
n1/=10;
dig3=n1%10;
n1/=10;
dig4=n1%10;
n1/=10;
dig5=n1%10;
n1/=10;
sum=dig1+dig2+dig3+dig4+dig5;
if (sum%2!=0){
     return "Oddish";
}
if(sum%2==0){
    return "Evenish";
}
}