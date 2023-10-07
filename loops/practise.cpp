#include<iostream >
using namespace std;
main()
{                                   // program for counting the digit in any number
	int a ,count;
	cout<<"enter the number : ";
	cin>>a;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	cout<<count;
}
