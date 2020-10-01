#include<iostream>
using namespace std;
template<class T>

T sum(T num1,T num2)
{
	T total=num1+num2;
	return(total);
}



int main(void)
{
	int n1,n2;
	double n3,n4;
	cout<<"Enter number 1 and number 2 : ";
	cin>>n1>>n2;
	cout<<"Sum of [Int] = "<<sum<int>(n1,n2)<<endl;

	cout<<"Enter number 3 and number 4 : ";
	cin>>n3>>n4;
	cout<<"Sum of [Double] = "<<sum<double>(n3,n4)<<endl;
}
