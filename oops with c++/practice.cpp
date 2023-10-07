#include<iostream>
using namespace std;
class A{
	private:
	int a, b;
	public:
		void input(){
			a=10;
			b=30;
		}
		friend class B;
	
};
class B{
	public:
		
		void show(A r)
		{
			int c=r.a*r.b;
			cout<<"here the c is  "<<c;
		}
	
	
};
int main(){
	A x;
	x.input();
	B y;                                                                       
	y.show(x);
	
}
