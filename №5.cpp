#include <iostream>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cstdio>
using namespace std;

char* Func(string str) {
 string s = str;
	char a[100];
	for( int i = 0; i < str.length(); i++) {
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U' || str[i] == 'Y') {
 str[i] = tolower(str[i]);
		}
	}
	for( int i = 0; i < str.length(); i++) {
 a[i] = str[i];
	}
	return a;
}
int main(){
    if (strcmp(Func("LOREM"), "LoReM") || strcmp(Func("sit"), "sit")|| strcmp(Func(""), "") || strcmp(Func("sit AmeT"), "sit ameT")){
 cout<<"NE OK";
		return 1;
 } else {
 cout<<"OK";
	}
	return 0;
}
