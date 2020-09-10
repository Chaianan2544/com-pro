#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	cout<<"Decimal : Octal : Hexa "<<endl;
	cout<< setfill('-')<<setw(30)<<"-"<<endl;
	cout<< setfill('-')<<showbase;
	for(int Dec=0;Dec<=300;Dec+=50){
		cout<<" "<<right<<setw(7)<<setbase(10)<<Dec<<" :";
		cout<<right<<setw(7)<<setbase(8)<<Dec<<" :";
		cout<<left<<setw(7)<<setbase(16)<<Dec<<endl;
	}


	return(0);
}