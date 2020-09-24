#include<iostream>
#include<string>
using namespace std;
float price,installment,interest,pmonth,imonth;
string product;
int Product()
{
	cout<<"<Choose product>"<<endl;
	cout<<"Product name : ";
	cin>>product;
	cout<<"Price : ";
	cin>>price;
	return(0);
}
int Installment()
{
	cout<<"<Choose installment>"<<endl;
	cout<<"Choose installment : ";
	cin>>installment;
	cout<<"Choose interest rate(%) : ";
	cin>>interest;
	return(0);
}
int PayMonth()
{
	cout<<"<PayMonth>"<<endl;
	pmonth=price/installment;
	imonth=(pmonth/100)*interest;
	cout<<"    Product price = "<<price<<endl;
	cout<<"    Total payment = "<<price+(imonth*installment)<<endl;
	cout<<"Payment per Month = "<<pmonth+imonth<<endl;
	return(0);
}
int main()
{
	char opt;
	do{
		cout<<"\n1.choose products"<<endl;
		cout<<"2.choose installment"<<endl;
		cout<<"3.Cal payMonth"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"choose option : ";
		cin>>opt;

	switch(opt){
	case '1' :
		Product();
		break;
	case '2' :
		Installment();
		break;
	case '3' :
		PayMonth();
		break;
	case '4' :
		cout<<"";
		break;
	default :
		cout<<"Please input 1, 2, 3, 4"<<endl;
		break;}
	}while(opt!='4');
	cout<<"Exit program"<<endl;
	return(0);
}