#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void demo1(string menu,int menuprice);
int main()
{
	string menulist;
	int price;
	while(menulist!="X")
	{
	cout<<"enter menu list : ";
	cin>>menulist;
	if(menulist=="X")
	{
		break;
	}
	cout<<"enter menuprice : ";
	cin>>price;
	demo1(menulist,price);
	}
	cout<<"end program"<<endl;
	return(0);
}

void demo1(string menulist,int menuprice)
{
	ofstream MyFile("d:/testfileIT1RC/menu.txt",ios_base::app);
	if(MyFile)
	{
		MyFile<<menulist<<" "<<menuprice<<endl;
		cout<<"complete"<<endl;
	}
	else
	{
		cout<<"error"<<endl;
	}
	MyFile.close();
}
