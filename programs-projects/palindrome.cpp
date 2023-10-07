#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char num[20];
	cout<<"enter a number : ";
	cin>>num;
	strrev(num);
    cout<<num<<endl;
    if(num==strrev(num))
    {
    	cout<<"number is palindrome ";
	}
	else
	cout<<"number is not palindrome ";
    return 0;
}
