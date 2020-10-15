#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
void getanwrite(ofstream &OutFile);
void readanddisplay(ifstream &InFile);
int main()
{
	string filename;
	ifstream InFile;
	ofstream OutFile;
	cout<<"enter file name : ";
	cin>>filename;
	cout<<endl;

	OutFile.open(filename.c_str());
	cout<<"now open file "<<filename<<".\n\n";

	InFile.open(filename.c_str());
	cout<<"now open file "<<filename<<".for read"<<endl;
	readanddisplay(InFile);
	InFile.close();
	cout<<"now close file "<<filename<<".\n\n";
	return(0);
}

void getandwrite(ofstream &OutFile)
{
	string id,name,surname;
	int score;
	for(int n=1;n<=3;n++)
	{
		cout<<"\nstudent no. "<<n<<endl;
		cout<<"enter ID : ";
		cin>>id;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter surname : ";
		cin>>surname;
		cout<<"enter score : ";
		cin>>score;

		OutFile<<id<<" "<<name<<" ";
		OutFile<<surname<<" "<<score<<endl;
	}
	cout<<endl;
}

void readanddisplay(ifstream &InFile)
{
	string id,name,surname;
	int score;

	for(int n=1;n<=3;n++)
	{
		InFile>>id>>name>>surname>>score;
		cout<<id<<" "<<name<<" "<<surname;
		cout<<" "<<score<<endl;
	}
	cout<<endl;
}