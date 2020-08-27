#include<iostream>
#include<time.h>
using namespace std;
float ran();
float ex();
int score=100;
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
		cout<<"Please input Y, N"<<endl;
		break;}
	}
	while(d!='Y' && d!='N');
	return(0);
}

float ran()
{
	srand(time(NULL));
	int rn =rand()%501;
	int mn;
	int n=0;
	char c;
	do
	{
		n=n+1;
		if(score==10){
			cout<<"\nEnter your number before the last chance! "<<n<<" : ";
			cin>>mn;}
		else if(score==5){
			cout<<"\nEnter your number for the last chance! "<<n<<" : ";
			cin>>mn;}
		else{
			cout<<"\nEnter your number "<<n<<" : ";
			cin>>mn;}
		if(mn==rn)
		{
			cout<<"random number is "<<rn<<endl;
			cout<<"Correct!!"<<endl;
			cout<<"You did it in "<<n<<" time!"<<endl;
			cout<<"Your score +20 = "<<score+20<<endl;
			score=score+20;
		}
		else if(mn>rn)
		{
			cout<<"wrong!!\nyour number is too high"<<endl;
			cout<<"Your score -5 = "<<score-5<<endl;
			score=score-5;
		}
		else
			{cout<<"wrong!!\nyour number is too low"<<endl;
		    cout<<"Your score -5 = "<<score-5<<endl;
			score=score-5;}
	}
	while(mn!=rn&&score!=0);
	if(mn==rn){
	cout<<"Do you want to play more? [Y/N] : ";
	cin>>c;}
	else{
		cout<<"Game Over!!"<<endl;
		c='N';}
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
	return(score);
}

float ex()
{
	cout<<"Exit Program"<<endl;
	return(0);
}