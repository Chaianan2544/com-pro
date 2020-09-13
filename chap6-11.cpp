#include <iostream>
#include <string>
using namespace std;
void ChangeString(string &S1, string &S2);
int main (){
	string Str1, Str2;
	cout << "Enter first string : ";
	cin >> Str1;
	cout << "Enter second string : ";
	cin >> Str2;
	cout << "Data string before call function. \n";
	cout << "Str1 = "<< Str1 << endl;
	cout << "Str2 = "<< Str2 << endl;
	ChangeString(Str1, Str2);
	cout << "Data string after call function. \n";
	cout << "strl = " << Str1 << endl;
	cout << "Str2 = " << Str2 << endl;
	ChangeString (Str1, Str2);
	cout << "Data string after cal function. \n";
	cout << "Str1 = "<< Str1 << endl;
	cout << "Str2 = "<< Str2 << endl;
	return (0) ;
}
void ChangeString(string &S1, string &S2)
{
	string Temp;
	Temp = S1;
	S1 = S2;
	S2 = Temp;
}