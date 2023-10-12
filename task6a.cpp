#include<iostream>
using namespace std;
string check(char abc);
main(){
    cout<<"Enter a charcter: ";
    char a;
    cin>>a;
    string result;
result=check(a);
cout<<result;
}
string check(char abc)
{
    if(abc=='A')
    {
        return"You enter c A";
    }
    if(abc=='a')
    {
        return"You enter small a";
    }
    return 0;
}