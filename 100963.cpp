#include<iostream>
#include<string>
using namespace std;
int main(){
	double val;
	cout<<"Enter floating number : ";
	cin>>val;
	cout<<endl;
	cout<<"\nCeiling of "<<val<<" is "<<ceil(val);
	cout<<"\nFloor of "<<val<<" is "<<floor(val);
	cout<<"\nSquare of "<<val<<" is "<<sqrt(val);
	cout<<"\nExpotential of "<<val<<" is "<<exp(val);
	cout<<"\nFloating absolute of "<<val<<" is ";
	cout<<fabs(val);
	cout<<"\nNatural Logarithm of "<<val<<" is "<<log(val);
	cout<<"\nLogarithm(10base) of "<<val<<" is "<<log10(val);
	cout<<"\nPower of "<<val<<" is "<<pow(val,3);//the pow number
	cout<<"\nSin of "<<val<<" is "<<sin(val);
	cout<<"\nCosine of "<<val<<" is "<<cos(val);
	cout<<"\nTangent of "<<val<<" is "<<tan(val);
	cout<<endl;


	return(0);
}