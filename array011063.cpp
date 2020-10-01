#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter array size : ";
	cin>>size;
	int* arrayInt= new int[size];
	//use pointer to help

	//Input data to array
	for(int i=0;i<size;i++)
	{
		cout<<"Enter number[Int] to Array : ";
		cin>>arrayInt[i];

		//random data to array
		//arrayInt[i]=rand()%10;
	}

	//Display data in array
	for(int i=0;i<size;i++)
	{
		cout<<"Array index["<<i<<"] = ";
		cout<<arrayInt[i]<<endl;
	}
	return 0;
}