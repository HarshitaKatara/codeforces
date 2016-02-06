#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>


using namespace std;

int main(){

	bool acccaps = true;

	string str;
	cin >> str;
	
	char d;

	for(int i = 1; i<str.length(); i++){
		d = str[i];
		if(!isupper(d)){
			acccaps = false;
			break;
		}
	}

	int j = 0;
	char c = str[j];
	if(acccaps && isupper(c)){
		putchar (tolower(c));
		for(int k = 1; k < str.length(); k++){
			c = str[k];
			putchar (tolower(c));
		}
		cout << "" << endl;

	} else if(acccaps && islower(c)){
		putchar (toupper(c));
		for(int k = 1; k < str.length(); k++){
			c = str[k];
			putchar (tolower(c));
		}
		cout << "" << endl;
	} else{
		cout << str << endl;
	}

	return 0;
}