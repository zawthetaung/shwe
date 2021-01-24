#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ifstream file("pro1.shwe");
	string str;
	string filecontents;
	while(getline(file,str))
	{
		cout<<str<<endl;
	}
	//cout<<"Hello World"<<endl;
	return 0;
}
