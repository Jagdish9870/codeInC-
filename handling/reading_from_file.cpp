#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str;
	ifstream newFile("C:\\Users\\jagdish gupta\\Desktop\\c++ language\\handling\\file_using_devc++.txt");
	
	while(getline(newFile,str))
	{
		cout<<str;
	}
	
	newFile.close();
}
