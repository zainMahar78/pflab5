#include<iostream>
using namespace std;
string symmetrical(int num);
main(){
	cout<<"Enter a three-digit number: ";
	int num;
	cin>>num;
	string result;
	result=symmetrical(num);
	cout<<result;
	return 0;
}
string symmetrical(int num)
{
	int n1=num%10;
	int n2=num/10;
	int n3=n2%10;
	int n4=n2/10;
	if(n4==n1){
	return "The number is symmetrical.";
}
	if(n4!=n1){
	return "The number is not symmetrical.";
}
}