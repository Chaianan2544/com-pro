#include<iostream>
#include<time.h>
#include<string>
using namespace std;
int main()
{
	srand(time(NULL));
	int rascii, rupper, rlower, rnum;
	char exit = 'Y';
	while(exit == 'Y'){
		string str = ""; //create string to stroe random reusult
		int length = 0, count = 0;
		cout<<"Enter character-length : ";
		cin>>length;
		cout<<"Random string are : ";
		while(count != length){
			rascii = rand() % 3; //random type of ascii
			if(rascii == 0){
				rnum = rand() % 10 + 48; //random number between 0-9
				str += char(rnum); //change random result to string type
			}
			else if(rascii == 1){
				rlower = rand() % 26 + 97; //random lower-char between a-z
				str += char(rlower);
			}
			else if(rascii == 2){
				rupper = rand() % 26 + 65; //random upper-char between A-Z
				str += char(rupper);
			}
			count++;
		}
		cout<<str<< endl;
		for(int i = 0; i < length; i++){
			int char_position = 0;
			cout<<str[i]<< " = ";
			for(int j = i; j < length; j++){
				if(str[i] == str[j]){
					char_position++;
				}
			}
			cout<<char_position<<" char "<< endl;
		}
		cout<<"\nDo you want to continue? (Y / N) : ";
		cin>>exit;
	}
	return 0;
}