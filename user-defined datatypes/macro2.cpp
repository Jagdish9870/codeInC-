#include<iostream>
#define num(a,b) ((a>b)?a:b)
using namespace std;
int main()
{
	cout<<num(215,256)<<endl;
	cout<<num(415,256)<<endl;
	cout<<num(215,656)<<endl;
	cout<<num(215,215)<<endl;
}
