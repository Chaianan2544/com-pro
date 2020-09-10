#include<iostream>
#include<string>
using namespace std;
int main(){
	int intval;
	long longval;
	float floatval;
	string strval;
	cout<<"Enter string number : ";
	cin>>strval;

	intval=atoi(strval.c_str());
	longval=atol(strval.c_str());
	floatval=atof(strval.c_str());
	cout<<endl;
	cout<<"Convert string to numeric.\n";
	cout<<"*************************\n";
	cout<<"Convert to interger = "<<intval<<endl;
	cout<<"Convert to long = "<<longval<<endl;
	cout<<"Convert to float = "<<floatval<<endl;

	srand(intval);
	cout<<"Now random integer number 10 number:"<<endl;
	cout<<"*************************************"<<endl;
	for(int N=1, Num; N<=10; N++){
		Num=rand()%10;
		cout<<Num<<" ";
	}
	cout<<endl;

	return(0);
}
