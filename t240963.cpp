#include<iostream>
using namespace std;
int numray[4][3]; //row and collumm in []
int main()
{  //use row to ref first 
	int count=0;
	for(int row=0;row<4;row++)
	{
		for(int col=0;col<3;col++)
		{
			count++;
			numray[row][col]=count;
		}
	}
	for(int row=0;row<4;row++)
	{
		for(int col=0;col<3;col++)
		{
			cout<<numray[row][col]<<" , ";
		}
		cout<<endl;
	}

	return(0);
}