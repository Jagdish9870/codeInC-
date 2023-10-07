#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"enter choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"its monday";
			break;
				case 2:
			cout<<"its tuesday";
			break;
				case 3:
			cout<<"its wednesday";
			break;
				case 4:
			cout<<"its thursday";
			break;
				case 5:
			cout<<"its friday";
			break;
				case 6:
			cout<<"its saturday";
			break;
				case 7:
			cout<<"its sunday";
			break;
			default:
				cout<<"invalid";
	}
}
