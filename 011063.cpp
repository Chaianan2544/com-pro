#include<iostream>
using namespace std;
int sum(int num1,int num2)
{
	int sum=num1+num2;
	return(sum);
}

double sum(double num1,double num2) //overload same name but different type
{
	double sum=num1+num2;
	return sum;
}

int main(void)
{
	int total=sum(5.5,10.5);//<- this will choose function that have most correct data,type
	cout<<"Sum of num1 + num2 = "<<total<<endl;
}
