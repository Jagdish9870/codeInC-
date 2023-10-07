#include<iostream>
using namespace std;
void area_triangle()
{
	int base ;
	int height;
	cout<<" enter base : "<<endl;
	cin>>base;
	cout<<"enter height : "<<endl;
	cin>>height;
	
	float area=0.5*base*height;
	cout<<"area of triangle is :"<<area<<endl;
}
void area_rectangle()
{
	int width ;
	int height;
	cout<<" enter width : "<<endl;
	cin>>width;
	cout<<"enter height : "<<endl;
	cin>>height;
	
	int area=width*height;
	cout<<"area of rectangle is :"<<area<<endl;
}
void area_circle()
{
	int radious ;
	cout<<"enter radious : "<<endl;
	cin>>radious;
	
	float area=1.732*radious;
	cout<<"area of circle is :"<<area<<endl;
}
void area_square()
{
	int side ;
	cout<<"enter side : "<<endl;
	cin>>side;
	
	int area=side*side;
	cout<<"area of square is :"<<area;
}
int main()
{
	area_triangle();
	area_circle();
	area_rectangle();
	area_square();
	return 0;
	
}
