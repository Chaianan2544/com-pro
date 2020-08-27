#include<iostream>
#include<time.h>
using namespace std;
int main(void)
{

	/*
	//gues the random number
	srand(time(NULL));
	int rn =rand()%101;
	int mn;
	int n=0;
	do
	{
		n=n+1;
		cout<<"Enter your number "<<n<<" : ";
		cin>>mn;
		if(mn==rn)
		{
			cout<<"random number is "<<rn<<endl;
			cout<<"Yep same"<<endl;
			cout<<"You did it in "<<n<<" time!"<<endl;
		}
		else if(mn>rn)
		{
			cout<<"wrong!!\nyour number is too high"<<endl;
		}
		else
			cout<<"wrong!!\nyour number is too low"<<endl;
	}
	while(mn!=rn);
	cout<<"Exit program"<<endl;
	/*======================================
	//show result of input number ref to random number
	srand(time(NULL));
	int RanNum = 5+(rand()%6);
	cout<<RanNum<<endl;
	int MyNum;
	cout<<"Enter your number : ";
	cin>>MyNum;
	if(MyNum>RanNum)
	{
		cout<<"MyNum > RanNum"<<endl;
	}
	else if(MyNum<RanNum)
	{
		cout<<"MyNum < RanNum"<<endl;
	}
	else
	{
		cout<<"MyNum = RanNum"<<endl;
	}
	========================================*/
	return(0);
}
