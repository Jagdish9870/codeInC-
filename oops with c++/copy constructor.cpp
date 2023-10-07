#include<iostream>
using namespace std;
class R{
	int x,y;
	public:
	R(int a, int b)//parameterized constructor...........
	{
		x=a;
		y=b;
		cout<<x<<ends<<y<<endl;
	}
	R(R &ref)
	{
		x=ref.x;
		y=ref.y;
		cout<<x<<ends<<y;
	}
};
int main(){
	R r(5,6);
	R r1=r;
	return 0;
	
}
