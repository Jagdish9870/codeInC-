#include<iostream>
using namespace std;
void fun()

{
 	 auto int a=10; 
 	 static int b=10;
 	 cout<<a<<ends<<b<<endl;
 	 a++;
 	 b++;
}
int main()
{
	fun();           //function calling 
	fun();
	fun();
	
}
