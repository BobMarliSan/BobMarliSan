#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
void add(string &s){
	for( int i = 0; i < s.length(); i++){
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
			s[i] == 'O' || s[i] == 'U'){
			
			s[i] = tolower(s[i]);}
	}
}
int main() {
	string s;
	getline(cin,s); 
	add(s);
	cout<<s<<endl;
	return 0;
	
}

