#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
 string s, a = "a", e = "e", y = "y", u = "u", i = "i", o = "o";
 int t = 0, c = 0, h = 0, k = 0, m = 0, z = 0;
 getline(cin,s);
 s.length();
 for (int p = 0; p < s.length(); b++)
	{
 if (s[b] == 'a')
 t++;
 if (s[b] == 'e')
 c++;
 if (s[b] == 'y')
 h++;
 if (s[b] == 'u')
 k++;
 if (s[b] == 'i')
 m++;
 if (s[b] == 'o')
 z++;
	}
 cout << "a = " << t << "e = " << c << h  << "u = " << k  << "i = " << m  << "o = " << z << endl;
 system("pause");
 return 0;
}
