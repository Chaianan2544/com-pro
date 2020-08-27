#include<iostream>
#include<time.h>
using namespace std;
float ran();
float ex();
int main()
{
	cout<<"GUESS NUMBER GAME!!"<<endl;
	int mn=0;
	int rn=0;
	char d;
	do{
		cout<<"Do you want to play? [Y/N] : ";
		cin>>d;
	switch(d){
	case 'Y' :
		ran();
		break;
	case 'N' :
		ex();
		break;
	default :
		cout<<"Please input Y, N : "<<endl;
		break;}
	}
	while(d!='Y' && d!='N');
	return(0);
}

float ran()
{
	//gues the random number
	srand(time(NULL));
	int rn =rand()%101;
	int mn;
	int n=0;
	char c;
	do
	{
		n=n+1;
		cout<<"Enter your number "<<n<<" : ";
		cin>>mn;
		if(mn==rn)
		{
			cout<<"random number is "<<rn<<endl;
			cout<<"Correct!!"<<endl;
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
	cout<<"Do you want to play more? [Y/N] : ";
	cin>>c;
	if(c=='Y')
		ran();
	else if(c=='N')
		ex();
	else
		do{
			cout<<"Please input Y, N : ";
			cin>>c;
			switch(c){
			case 'Y' :
				ran();
				break;
			case 'N' :
				ex();
				break;
			default :
			    break;}
		}
		while(c!='Y' && c!='N');
	return(0);
}

float ex()
{
	cout<<"Exit Program"<<endl;
	return(0);
}







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