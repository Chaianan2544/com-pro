#include<iostream>
using namespace std;
int balance1, balance2;
int ID1, ID2, IDn1;
float regis();
float depo();
float withd();
float show();
float trans();
int main()
{
	int cash;
	do{
		cout<<"Net Banking";
	    cout<<"\n1.Register";
	    cout<<"\n2.Deposite";
		cout<<"\n3.Withdraw";
		cout<<"\n4.ShowBalance";
		cout<<"\n5.Transfer";
	    cout<<"\n0.Exit";
	    cout<<"\nChoose Option [0-5] : ";
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
	case 4 :
		show();
		break;
	case 5 :
		trans();
		break;
	case 0 :
		cout<<"Exit Program"<<endl;
		break;
	default :
		cout<<"Please input 0, 1, 2, 3, 4, 5"<<endl;
		break;}
	}
	while(cash!=0);
	return(0);
}
float regis()
{
	cout<<"Enter Your Account 1 ID : ";
	cin>>ID1;
	cout<<"Enter Your Account 1 Opening Balance : ";
	cin>>balance1;
	cout<<"Your account 1 Total Balance is "<<balance1<<endl;
	cout<<"Enter Your Account 2 ID : ";
	cin>>ID2;
	cout<<"Enter Your Account 2 Opening Balance : ";
	cin>>balance2;
	cout<<"Your account 2 Total Balance is "<<balance2<<endl;

	return(balance1, balance2);
}
float depo()
{
	int add;
	cout<<"enter your ID number : ";
	cin>>IDn1;
	if(IDn1==ID1)
	{cout<<"Enter Your Deposite Money : ";
	cin>>add;
	cout<<"Your Total Balance is "<<balance1+add<<endl;
	balance1=balance1+add;
	}
	else if(IDn1==ID2)
	{cout<<"Enter Your Deposite Money : ";
	cin>>add;
	cout<<"Your Total Balance is "<<balance2+add<<endl;
	balance2=balance2+add;
	}
	else
		cout<<"ID not found "<<endl;
	return(0);
}
float withd()
{
	int dec;
	cout<<"Enter your ID number : ";
	cin>>IDn1;
	if(IDn1==ID1)
	{cout<<"Enter Your Withdraw Money : ";
	cin>>dec;
	if(balance1>=dec){
	cout<<"Your Total Balance is "<<balance1-dec<<endl;
	balance1=balance1-dec;
	}
	else
	{cout<<"Your don't have enough balance to withdraw"<<endl;}
	}
	else if(IDn1==ID2)
	{cout<<"Enter Your Withdraw Money : ";
	cin>>dec;
	if(balance2>=dec){
	cout<<"Your Total Balance is "<<balance2-dec<<endl;
	balance2=balance2-dec;
	}
	else
	{cout<<"Your don't have enough balance to withdraw"<<endl;}
	}
	else
		cout<<"ID not found "<<endl;
	return(0);
}
float show()
{
	cout<<"Show Balance All Account"<<endl;
	cout<<"Your account ID:"<<ID1<<" total balance is "<<balance1<<endl;
	cout<<"Your account ID:"<<ID2<<" total balance is "<<balance2<<endl;
	return(balance1, balance2);
}
float trans()
{
	int transfer;
	cout<<"Enter your ID number : ";
	cin>>IDn1;
	if(IDn1==ID1){
		cout<<"Enter Money you want to transfer to ID:"<<ID2<<" : ";
		cin>>transfer;
		if(transfer<=balance1)
		{
			cout<<"You have transfered "<<transfer<<" to ID:"<<ID2<<endl;
			cout<<"Your remaining balance is "<<balance1-transfer<<endl;
			balance1=balance1-transfer;
			balance2=balance2+transfer;
		}
		else
		{
			cout<<"Your remaining balance is not enough to transfer"<<endl;
		}
	}
	else if(IDn1==ID2){
		cout<<"Enter Money you want to transfer to ID:"<<ID1<<" : ";
		cin>>transfer;
		if(transfer<=balance2)
		{
			cout<<"You have transfered "<<transfer<<" to ID:"<<ID1<<endl;
			cout<<"Your remaining balance is "<<balance2-transfer<<endl;
			balance2=balance2-transfer;
			balance1=balance1+transfer;
		}
		else
		{
			cout<<"Your remaining balance is not enough to transfer"<<endl;
		}
	}
	else{
		cout<<"ID not found "<<endl;}
	return(0);
}