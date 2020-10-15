#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream MyFile;
	MyFile.open("6306021612023.txt");
	
	
	if (MyFile.is_open())
	{
	}
	else
	{
		cout<<"File not found"<<endl;
	}
	string text;
	while(getline(MyFile,text))//getline read one string per times
	{
		cout<<text<<endl;
	}
	MyFile.close();
}