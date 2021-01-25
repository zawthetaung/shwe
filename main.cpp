#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc,char** argv)
{
	//string first_arg(argv[1]);
	ifstream file(argv[1]);
	string str;
	string filecontents;
	while(getline(file,str))
	{
		cout<<str<<endl;
	}
	//cout<<"Hello World"<<endl;
	return 0;
}
