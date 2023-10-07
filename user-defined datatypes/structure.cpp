#include<iostream>
using namespace std;
struct stu

{
	char name[20];
 	   int roll_no;
		float marks;
			
};
int main()
{
	struct stu s;
	cout<<"enter name : "<<endl;
	cin>>s.name;
	cout<<"enter roll_no : "<<endl;
	cin>>s.roll_no;
	cout<<"enter marks : "<<endl;
	cin>>s.marks;
	
	cout<<s.roll_no<<" "<<s.name<<" "<<s.marks;
	return 0;
}
