#include<iostream>
using namespace std;
template <class T>
T Max( T a, T b);
int main (){
	int v1, v2;
	cout << "Enter integer number.(two-number)\n";
	cin >> v1 >> v2;
	cout << "Max = " << Max<int> (v1,v2) << endl;
	double d1, d2;
	cout << "\nEnter double number.\n";
	cin >> d1 >> d2;
	cout << "Мах = " << Max<double>(d1, d2) << endl;
	return(0);
}
template <class T>
T Max( T a, T b)
{
	if (a > b)  return(a);
	else return(b);
}
