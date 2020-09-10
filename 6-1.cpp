#include<iostream>
#include<string>
using namespace std;
int main(){
	char ch;
	string Message;
	cout<<"Enter char : ";
	cin>>ch;
	cout<<endl;
	if(isalnum(ch)){
		if(isalpha(ch)){
			if(islower(ch)) Message = "lower char.";
			else Message = "upper char.";
		}
		else if(isdigit(ch)) Message = "digit.";
	}
	else Message = "special char.";
	cout<<"\'"<<ch<<"\'"<<" is "<< Message <<endl;
	if(isalpha(ch)){
		if(islower(ch)){
			cout<<"\'"<<ch<<"\'"<<"convert to upper \'";
			cout<<(char)toupper(ch) << "\'";
		}
		else{
			cout<<"\'"<<ch<<"\'"<<"to lower \'";
			cout<<(char)tolower(ch)<<"\'";
		}
		cout<<endl;
	}


	return(0);
}
