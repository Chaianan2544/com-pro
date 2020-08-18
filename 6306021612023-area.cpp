#include<iostream>
using namespace std;
float rect();
float cycl();
int main()
{
	int num;
	do{
		cout<<"Select Menu for Area";
	    cout<<"\n1.Rectangle";
	    cout<<"\n2.Circle";
	    cout<<"\n0.Exit Program";
	    cout<<"\nEnter menu [0-2] : ";
	    cin>>num;

	switch(num){
	case 1 :
		cout<<"Area of Rectangle"<<endl;
		rect();
		break;
	case 2 :
		cout<<"Area of Circle"<<endl;
		cycl();
		break;
	case 0 :
		cout<<"Exit Program"<<endl;
		break;
	default :
		cout<<"Please input 0, 1, 2"<<endl;
		break;}
	}
	while(num!=0);
	return(0);
}
float rect()
{
	int width,lenght,area;
	cout<<"Enter Width : ";
	cin>>width;
	cout<<"Enter Lenght : ";
	cin>>lenght;
	area=width*lenght;
	cout<<"Area of Rectangle = "<<area<<endl;
	return(area);
}
float cycl()
{
	int radius,area;
	cout<<"Enter Radius : ";
	cin>>radius;
	area=3.14*(radius*radius);
	cout<<"Area of Cycle = "<<area<<endl;
	return(area);
}