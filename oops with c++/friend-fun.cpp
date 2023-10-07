#include<iostream>
using namespace std;
class jack
{
	private:
		string laptop;
	public:
	void show()
	{
		laptop="code";
		}
	friend void rohit(jack r);
};
void rohit(jack r)
   {
		cout<<"i want laptop for "<<r.laptop;
	}	
int main(){
	jack j;
	j.show();
	rohit(j);
	return 0;
}
