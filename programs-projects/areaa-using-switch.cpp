#include<iostream>
using namespace std;

int main(){
        int ch;
		int width ;
	    int height;
	    int base ;
		int radious ;
		int side ;
		float area;
	cout<<"enter 1 for area of triangle"<<endl;
	cout<<"enter 2 for area of rectangle"<<endl;
	cout<<"enter 3 for area of circle"<<endl;
	cout<<"enter 4 for area of square"<<endl;
	
	cout<<"enter the choices : "<<endl;
	cin>>ch;
	switch(ch)
	{
 	case 1:
		
		cout<<" enter base : "<<endl;
		cin>>base;
		cout<<"enter height : "<<endl;
		cin>>height;
	
		area=0.5*base*height;
 		cout<<"area of triangle is :"<<area<<endl;
		break;
	
	case 2:
		
         cout<<" enter width : "<<endl;
		 cin>>width;
		 cout<<"enter height : "<<endl;
		 cin>>height;
	
		  area=width*height;
		 cout<<"area of rectangle is :"<<area;
		 break;
	case 3:
		
		cout<<"enter radious : "<<endl;
		cin>>radious;
	
		area=1.732*radious;
		cout<<"area of circle is :"<<area;
		break;
	case 4:
		
		cout<<"enter side : "<<endl;
		cin>>side;
	
		area=side*side;
		cout<<"area of square is :"<<area;
		break;
	
	default:
		cout<<"choice invalid"<<endl;
		return 0;
		
			
			
	}
}
