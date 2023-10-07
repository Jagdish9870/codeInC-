#include<iostream>
using namespace std;
 main()
 {
 	int a ,b,c,ch;
	cout<<"enter the numbers :";
	cin>>a>>b;
	cout<<"enter the choice :"<<endl;
	cin>>ch;
	if(ch==1){
	       c=a+b;
	       cout<<"c= "<<c;
	}
	else if(ch==2)
	{
	 c=a-b;
	       cout<<"c= "<<c;
	}
	else if(ch==3)
	{
	 c=a*b;
	       cout<<"c= "<<c;
	}
	else if(ch==4)
	{
	 c=a/b;
	       cout<<"c= "<<c;
	}
	else if(ch==5)
	{
	 c=a%b;
	       cout<<"c= "<<c;
	}
	else
	{
		cout<<"choice is invalid";
	}
 }
