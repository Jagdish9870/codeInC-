#include<iostream>
using namespace std;

int main()
{
	enum gender{                               // enum enum_name { value1, value2,...}
		male, female, others
	};
	cout<<female<<endl;
	gender gen=others;              //storing enum value in onother name;
	cout<<gen;
	return 0;
}
