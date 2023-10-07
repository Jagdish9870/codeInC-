#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream newFile("C:\\Users\\jagdish gupta\\Desktop\\c++ language\\handling\\file_using_devc++.txt");
	cout<<"file has been created successfully..."<<endl;
	newFile.close();
}
