#include<iostream>
using namespace std;
int main()
{
	/*int row,col;
	cout<<"Enter Row of array : ";
	cin>>row;
	int row,col;
	cout<<"Enter Collumm of array : ";
	cin>>;*/

	const int row=5,col=4;
	int arrayInt[row][col];

	int count=1;
	for(int r=0;r<row;r++)//first loop for with row
	{
		for(int c=0;c<col;c++)
		{
			arrayInt[r][c] = count;
			count++;
		}

	}

	//Display data in array
	for(int r=0;r<row;r++)//first loop for with row
	{
		for(int c=0;c<col;c++)
		{
			cout<<arrayInt[r][c]<<"\t|\t";
		}
		cout<<endl;

	}
	return 0;
}