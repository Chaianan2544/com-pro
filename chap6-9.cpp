#include <iostream> 
using namespace std; 
int Min(int V1, int V2); 
int Max(int v1, int v2); 
int main()
{
	int Value1, Value2; 
	cout << "Enter first number : ";
	cin >> Value1; 
	cout << "Enter second number : "; 
	cin >> Value2; 
	cout << "Max value : "<< Max(Value1, Value2)<<endl;
	cout << "Min value : "<< Min(Value1, Value2)<<endl;
	return (0);
}
int Min(int V1, int V2)
{
	if (V1 < V2) return (V1) ; 
	else return (V2);
}
int Max(int V1, int V2)
{
	if (V1 > V2) return(V1); 
	else return (V2);
}
