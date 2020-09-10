#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	string str1="Microsoft";
	string str2=str1+"Word";
	string str3;

	cout<<"value str1 = "<<str1;
	cout<<", Length str1 = "<<str1.length()<<endl;

	cout<<"value str2 = "<<str2;
	cout<<", Length str2 = "<<str2.length()<<endl;

	cout<<"value str3 = "<<str3;
	cout<<", Length str3 = "<<str3.length()<<"\n\n";
	cout<<"enter text to str3 : ";
	cin>>str3;
	cout<<"now str3 = "<<str3.length()<<"\n\n";

	switch(str1.compare(str2))
	{
	case 0 : cout<<"str1 equal str2"<<endl; break;
	case 1 : cout<<"str1 more than str2"<<endl; break;
	case -1 : cout<<"str1 less than str2"<<endl; break;

	}
	cout<<"\nnow find 's' in str3"<<endl;
	int pos=str3

	return(0);
}
