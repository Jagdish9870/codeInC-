#include<iostream>
using namespace std;
int main()
{
	int a,b,c,ch;
	cout<<"enter two numbers :"<<endl;
	cin>>a>>b;
	cout<<"enter choice :"<<endl;
	cin>>ch;
	
	
	switch(ch)
	{
		case1 :
			c=a+b;
			cout<<"c= "<<c<<endl;
			break;
		case 2 :
			c=a-b;
			cout<<"c= "<<c<<endl;
			break;
		case 3 :
			c=a*b;
			cout<<"c= "<<c<<endl;
			break;
		case 4:
			c=a/b;
			cout<<"c= "<<c<<endl;
			break;
		case 5 :
			c=a%b;
			cout<<"c= "<<c<<endl;
			break;
		default:
			cout<<"invalid choice";
	}


}
