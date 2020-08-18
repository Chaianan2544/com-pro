#include<iostream>
using namespace std;
int balance;
float regis();
float depo();
float withd();
int main()
{
	int cash;
	do{
		cout<<"Net Banking";
	    cout<<"\n1.Register";
	    cout<<"\n2.Deposite";
		cout<<"\n3.Withdraw";
	    cout<<"\n0.Exit";
	    cout<<"\nChoose Option [0-3] : ";
	    cin>>cash;

	switch(cash){
	case 1 :
		cout<<"Register"<<endl;
		regis();
		break;
	case 2 :
		cout<<"Deposite"<<endl;
		depo();
		break;
	case 3 :
		cout<<"Withdraw"<<endl;
		withd();
		break;
	case 0 :
		cout<<"Exit Program"<<endl;
		break;
	default :
		cout<<"Please input 0, 1, 2, 0"<<endl;
		break;}
	}
	while(cash!=0);
	return(0);
}
float regis()
{
	cout<<"Enter Your Account Opening Balance : ";
	cin>>balance;
	cout<<"Your Total Balance is "<<balance<<endl;
	return(balance);
}
float depo()
{
	int add;
	cout<<"Enter Your Deposite Money : ";
	cin>>add;
	cout<<"Your Total Balance is "<<balance+add<<endl;
	return(add);
}
float withd()
{
	int dec;
	cout<<"Enter Your Withdraw Money : ";
	cin>>dec;
	cout<<"Your Total Balance is "<<balance-dec<<endl;
	return(dec);
}