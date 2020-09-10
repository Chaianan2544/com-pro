#include<iostream>
#include<string>
using namespace std;
int main(){
	char str1[30],str2[30];
	cout<<"Enter string 1 : ";
	cin>>str1;
	cout<<"Enter string 2 : ";
	cin>>str2;
	cout<<endl;
	cout<<"strcat(str1,str2) = "<<strcat(str1,str2)<<endl;
	cout<<"strchr(str1,'s') = "<<strchr(str1,'s')<<endl;
	cout<<"strcmp(str1,str2) = "<<strcmp(str1,str2)<<endl;
	cout<<"strcpy(str1,str2) = "<<strcpy(str1,str2)<<endl;
	cout<<"strlen(str1) = "<<strlen(str1)<<endl;
	cout<<"strlen(str2) = "<<strlen(str2)<<endl;
	cout<<"string 1 : "<<str1<<endl;
	cout<<"string 1 reverse : ";
	for(int N=strlen(str1)-1; N>=0; N--)
		cout<<str1[N];
	cout<<endl<<endl;

	return(0);
}