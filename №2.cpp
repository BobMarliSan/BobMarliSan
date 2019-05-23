#include <iostream>
using namespace std;

void func(string str, int (&te)[6], char (&symma)[6]) {
 te[6];
for( int i = 0; i < 6; i++) {
 te[i]=0;}
 symma[0] = 'a';
 symma[1] = 'e';
 symma[2] = 'o';
 symma[3] = 'i';
 symma[4] = 'u';
 symma[5] = 'y';
for(int i = 0; i < str.length(); i++) {
if (str[i]=='a') {
	te[0]++;
		
 } else if (str[i]=='e') {
		
 te[1 ]++;
 } else if (str[i]=='o') {
			
 te[2 ]++;
 } else if (str[i]=='i') {
		
 te[3 ]++;
 } else if (str[i]=='u') {
			
 te[4 ]++;
 } else if (str[i]=='y') {
			
 te[5 ]++;
		}
	}
}
int main() {
 string str;
	int q=0;
	int w[6];
	char v[6];
	getline(cin, str);
	func(str, w, v);
	for(int i = 0 ; i < (sizeof(w)/sizeof(w[0 ])); i++) {
 q+=w[i];
 cout<<v[i]<<" - " <<w[i]<<endl;
	}
 cout<<"all = " <<q<<endl;
return 0;
