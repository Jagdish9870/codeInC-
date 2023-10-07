#include<iostream>
using namespace std;
int main()
{
	int num, i;
	int factorial=1;
	cout<<" enter the number to print the factorial(!) : "<<endl;
	cin>>num;
	
	for(i=1;i<=num;i++)
	
 	    factorial = factorial*i;
		cout<<factorial;
		return 0;

}
