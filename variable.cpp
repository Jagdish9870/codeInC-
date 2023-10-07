#include<iostream>
using namespace std;

int a=10;  //global variable :- can be accessed anywhere in the program
static int d=35;  // global static variable 
main()
 
{
	int b=20;  //local variable :- can be accessed inside the block only
	static int c=23;    //local static variable 
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	// here a, b, c is variable name 
	
}
