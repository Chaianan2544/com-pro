#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void DisplayMenu();
float Area(const float Radius);
float Area (const float Length, const float Widht);
int main(){
	char Choice;
	bool Flag = true;
	do{
		DisplayMenu () ;
		cin >> Choice;
		if (Choice == '1'){
			float Radius;
			cout << "InEnter radius : ";
			cin >> Radius;
			cout << "Area of Circle = "<< fixed;
			cout << setprecision(2) << Area(Radius) << endl;
		}
		else if (Choice == '2'){
			float Length, Widht;
			cout << "Enter length and width : ";
			cin >> Length >> Widht;
			cout << "Area of Rectangle = "<< fixed;
			cout << setprecision(2) << Area(Length, Widht);
			cout << endl;
		}
		else if (Choice == '3') Flag = false;
		else{
			cout << "AnYou choose out of cange is ";
			cout << "not process. \n";
		}
	}while (Flag);
	cout << "\n . . . Exit Program . . .\n";
	return (0);
}
float Area(const float Radius)
{
	return(3.14159F * Radius * Radius);
}
float Area(const float Length, const float Widht)
{
	return (Length * Widht);
}
void DisplayMenu()
{
	cout << endl;
	cout << " Program Calculate Area " << endl;
	cout << " 1. Clrcle" << endl;
	cout << " 2. Rectangle" << endl;
	cout << " 3. Exit" << endl;
	cout << "Enter your choose number: ";
}