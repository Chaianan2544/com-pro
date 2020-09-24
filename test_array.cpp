#include<iostream>
using namespace std;
int main()
{
	/* //การinputค่าเข้าไปในarray ตำแหน่งต่างๆ
	int numray[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Input number to array index[i] : ";
		cin>>numray[i];
	}
	*/
	
	//=====================
	float numray[10]={20,10,32,35,84,75,66,97,68,99}; 
	//=====================
	float max=0;
	for(int i=0;i<10;i++)
	{
		if(max<numray[i])
		{
			max=numray[i];
		}
	}
	cout<<"Max in array : "<<max<<endl;
	//=====================
	float min=numray[0];
	for(int i=0;i<10;i++)
	{
		if(min>numray[i])
		{
			min=numray[i];
		}
	}
	cout<<"Min in array : "<<min<<endl;
	//=====================

	float total=0;
	for(int i=0;i<10;i++)
	{
		total+=numray[i];
	}
	cout<<"Average in array : "<<total/10<<endl;

	//======================
	cout<<"Show data in array index 0 => 9"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"index["<<i<<"] = "<<numray[i]<<endl;
	}
	cout<<"=================================="<<endl;
	cout<<"Show data in array index 9 => 0"<<endl;
	for(int i=9;i>=0;i--)
	{
		cout<<"index["<<i<<"] = "<<numray[i]<<endl;
	}
	return(0);
}
