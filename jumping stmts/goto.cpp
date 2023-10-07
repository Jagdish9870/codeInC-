#include<iostream>
using namespace std;
int main(){
	int rank;
	cout<<"enter your rank : ";
	cin>>rank;
	if(rank<=5)
	goto iit;
	else
	goto no_iit;
	
  	iit:
		cout<<"congrats you are eligible for iit delhi";
		return 0;
	no_iit:
		cout<<"your are not eligible, check for another college";
}
