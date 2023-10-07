#include<iostream >
using namespace std;
int main()
{
	int a,b,c;
	cout<<" enter the numbers : ";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<"a is greater ";
		}
		else
		{
			cout<<"c is greater";
		}
	}
	else if(b>a)
	{
		if(b>c)
		{
			cout<<"b is greater";
		}
		else{
			cout<<"c is greater";
		}
	}
	else if(a==b)
	{
		if(a==c)
		{
			cout<<" all are equal";
		}
		else{
			cout<<"a and b are equal";
		}
	}
	else if(b==c)
	{
		if(b==a)
		{
			cout<<" all are equal";
		}
		else{
			cout<<"b and c are equal";
		}
	}
	else if(a==c)
	{
		if(a==b)
		{
			cout<<" all are equal";
		}
		else{
			cout<<"a and c are equal";
		}
	}
	
}
