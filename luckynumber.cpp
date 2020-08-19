#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,average;
int main(void)
{
	srand (time(NULL));{
		num1= rand();
		cout<<num1<<endl;
		num2= rand();
		cout<<num2<<endl;
		num3= rand();
		cout<<num3<<endl;
		num4= rand();
		cout<<num4<<endl;
		num5= rand();
		cout<<num5<<endl;
		num6= rand();
		cout<<num6<<endl;
		num7= rand();
		cout<<num7<<endl;
		num8= rand();
		cout<<num8<<endl;
		num9= rand();
		cout<<num9<<endl;
		num10= rand();
		cout<<num10<<endl;
	}
    if(num1<num2&num1<num3&num1<num4&num1<num5&num1<num6&num1<num7&num1<num8&num1<num9&num1<num10)
		cout<<"Minimal is "<<num1<<endl;

	else if(num2<num1&num2<num3&num2<num4&num2<num5&num2<num6&num2<num7&num2<num8&num2<num9&num2<num10)
		cout<<"Minimal is "<<num2<<endl;

	else if(num3<num1&num3<num2&num3<num4&num3<num5&num3<num6&num3<num7&num3<num8&num3<num9&num3<num10)
		cout<<"Minimal is "<<num3<<endl;

	else if(num4<num1&num4<num2&num4<num3&num4<num5&num4<num6&num4<num7&num4<num8&num4<num9&num4<num10)
		cout<<"Minimal is "<<num4<<endl;

	else if(num5<num1&num5<num2&num5<num3&num5<num4&num5<num6&num5<num7&num5<num8&num5<num9&num5<num10)
		cout<<"Minimal is "<<num5<<endl;

	else if(num6<num1&num6<num2&num6<num3&num6<num4&num6<num5&num6<num7&num6<num8&num6<num9&num6<num10)
		cout<<"Minimal is "<<num6<<endl;

	else if(num7<num1&num7<num2&num7<num3&num7<num4&num7<num5&num7<num6&num7<num8&num7<num9&num7<num10)
		cout<<"Minimal is "<<num7<<endl;

	else if(num8<num1&num8<num2&num8<num3&num8<num4&num8<num5&num8<num6&num8<num7&num8<num9&num8<num10)
		cout<<"Minimal is "<<num8<<endl;

	else if(num9<num1&num9<num2&num9<num3&num9<num4&num9<num5&num9<num6&num9<num7&num9<num8&num9<num10)
		cout<<"Minimal is "<<num9<<endl;
	else
		cout<<"Minimal is "<<num10<<endl;



	if(num1>num2&num1>num3&num1>num4&num1>num5&num1>num6&num1>num7&num1>num8&num1>num9&num1>num10)
		cout<<"Maximum is "<<num1<<endl;

	else if(num2>num1&num2>num3&num2>num4&num2>num5&num2>num6&num2>num7&num2>num8&num2>num9&num2>num10)
		cout<<"Maximum is "<<num2<<endl;

	else if(num3>num1&num3>num2&num3>num4&num3>num5&num3>num6&num3>num7&num3>num8&num3>num9&num3>num10)
		cout<<"Maximum is "<<num3<<endl;

	else if(num4>num1&num4>num2&num4>num3&num4>num5&num4>num6&num4>num7&num4>num8&num4>num9&num4>num10)
		cout<<"Maximum is "<<num4<<endl;

	else if(num5>num1&num5>num2&num5>num3&num5>num4&num5>num6&num5>num7&num5>num8&num5>num9&num5>num10)
		cout<<"Maximum is "<<num5<<endl;

	else if(num6>num1&num6>num2&num6>num3&num6>num4&num6>num5&num6>num7&num6>num8&num6>num9&num6>num10)
		cout<<"Maximum is "<<num6<<endl;

	else if(num7>num1&num7>num2&num7>num3&num7>num4&num7>num5&num7>num6&num7>num8&num7>num9&num7>num10)
		cout<<"Maximum is "<<num7<<endl;

	else if(num8>num1&num8>num2&num8>num3&num8>num4&num8>num5&num8>num6&num8>num7&num8>num9&num8>num10)
		cout<<"Maximum is "<<num8<<endl;

	else if(num9>num1&num9>num2&num9>num3&num9>num4&num9>num5&num9>num6&num9>num7&num9>num8&num9>num10)
		cout<<"Maximum is "<<num9<<endl;
	else
		cout<<"Maximum is "<<num10<<endl;
	
	average=(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
	cout<<"The Average of this 10 number is "<<average<<endl;
}