#include<iostream>
using namespace std;
int main()
{    int a,b,c;
	cout<<"execution started...."<<endl;
	cout<<"enter two numbers : "<<endl;
	cin>>a>>b;
	try{
		if(b==0)
		throw b;
		c=a/b;
		cout<<"c= "<<c<<endl;
		
		
	}
    catch(int x){
    	cout<<"cannot divide by zero ...";
	}
	
	cout<<"execution ended.....";
}
