#include<iostream>
using namespace std;
int count=0;
class S{
	public:
		S()
		{
			cout<<++count<<"jai shree ram"<<endl;
		}
		~S(){
			cout<<count--<<"jai shree ram"<<endl;
		}
};
int main()
{
	S s,s1,s2;
	return 0;
}
