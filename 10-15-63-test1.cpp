#include<iostream>
#include<fstream>
using namespace std;
void demo1();

int main()
{
	demo1();
	return(0);
}
void demo1()
{
	ofstream MyFile("L:\multiAA.txt");//of stream can create file
	int mul; //but if the specific location can't be found it can't create
	cout<<"enter number for multiple table : ";
	cin>>mul;

	if(MyFile)
	{
	for(int i=1;i<=12;i++)
	{
		MyFile<<mul<<" x "<<i<<" = "<<mul*i<<endl; 
	}
	cout<<"write complete"<<endl;
	}
	else
	{
		cout<<"error!, file not found."<<endl;
	}
	MyFile.close();
}