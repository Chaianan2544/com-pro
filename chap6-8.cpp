#include <iostream>
using namespace std;
void CalCircle();
int main(){
	cout << "Program Calculate of Circle. " << endl;
	cout<< "*****************************" <<endl;
	CalCircle();
	return(0);
}
void CalCircle(){
	float Radius, Area, Circumference;
	cout << "Input radius : ";
	cin >> Radius;
	Area = 3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;;
	cout << endl;
	cout << "Area of circle : " << Area << endl;
	cout << "Circumference of circle : " << Circumference << endl;
	cout << "Diameter of circle : "<< (2*Radius) << endl;
}