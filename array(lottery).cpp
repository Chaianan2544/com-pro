#include<iostream>
#include<time.h>
#include<string>
using namespace std;
int main()
{//stored number customer bought and the money of that number bought
	//decide to [number][money]
	srand(time(NULL));
	const int row=5,col=2;
	int arrayLottery[row][col];
	
	int luckyNumber=rand()%100;
	//cout<<"LuckyNumber is "<<luckyNumber<<endl;//check luckynumber

	int t=0;
	for(int r=0;r<row;r++)
	{
		int c=0;
		cout<<"Number "<<r+1<<" of lottery[0-99] : ";
		cin>>arrayLottery[r][c];
		c++;//move the collumm of number to collumm of money
		cout<<"Money of lottery "<<arrayLottery[r][c-1]<<" : ";
		cin>>arrayLottery[r][c];
		t=t+arrayLottery[r][1];
	}

	//check the results of lottery
	string result;
	int reward;
	for(int r=0;r<row;r++)
	{
		int c=0;
		if(luckyNumber==arrayLottery[r][c])
		{
			result="Congratulation You win the lottery";
			reward=arrayLottery[r][c+1];
			break;
		}
		else
		{
			result="Too bad HAH!HAH!HA!HA! You LOSE!";
			reward=0;
		}
	}
	cout<<result<<endl;


	//check money customer get from the result

	cout<<"Total money you get is "<<reward*60<<" Baht"<<endl;
	cout<<"Total money you have used is "<<t<<" Baht"<<endl;
	int profit;
	profit=(reward*60)-t;
	if(profit>0)
	{
		cout<<"Your Profit gain is "<<(reward*60)-t<<" Baht"<<endl;
	}
	else
	{
		cout<<"You did not get any profit."<<endl;
	}


	return 0;
}