#include<iostream>
using namespace std;
double Area(double r);//(3.14)(radius^2)
double Area(double w,double l);//width*lenght

int main()
{
	double r,w,l;
	double area;
	int c;
	do{
		cout<<"1.circle area"<<endl;
		cout<<"2.rectangle ara"<<endl;
		cout<<"input 0 to exit"<<endl;
		cout<<"choose choice : ";
		cin>>c;
	if(c==1)
	{
		cout<<"Enter radius : ";
		cin>>r;
		cout<<"Area of Circle = "<<Area(r)<<endl;
	}
	else if(c==2)
	{
		cout<<"Enter width : ";
		cin>>w;
		cout<<"Enter lenght : ";
		cin>>l;
		cout<<"Area of Rectangle = "<<Area(w,l)<<endl;
	}
	else if(c==0)
	{
		cout<<"End Program"<<endl;
	}
	else
		cout<<"Please choose the following choice"<<endl;
	}
	while(c!=0);
	return(0);
}

double Area(double r)
{
	return (3.14*(r*r));
}

double Area(double w,double l)
{
	return (w*l);
}