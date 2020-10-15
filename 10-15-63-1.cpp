#include<iostream>
using namespace std;

void display(int number)
{
	cout<<"number = "<<number<<endl;
}

int main()
{
	int number =-1;
	while(number!=0)
	{
		cout<<"enter number[0 to exit] : ";
		cin>>number;
		display(number);
	}
	cout<<"exit program"<<endl;
	return(0);
}