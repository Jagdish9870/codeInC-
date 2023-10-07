#include<iostream>
using namespace std;
struct stu{
	int roll_no;
	float marks;
	double phone;
};
union stu2{
	int roll_no;
	float marks;
	double phone;
};
int main()
{
	struct stu s1;
	union stu2 s2;
	cout<<"union size : "<<sizeof(s2)<<endl;        // size of memory willbe depend on size of largest datatypes
	cout<<"structure size : "<<sizeof(s1)<<endl;  // size of memory willbe depend on size of all combine datatypes
}
