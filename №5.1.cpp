#include <iostream> 
using namespace std; 
int * func(string s) { 
int r[6]; 
for (int i = 0; i < 6; i++) { 
r[i] = 0; 
} 
for (int i = 0; i < s.length(); i++) { 
if (s[i] == ' a') { 
r[0] ++; 
} else if (s[i] == 'e') {
r[1] ++; 
} else if (s[i] == 'o') { 
r[2] ++; 
} else if (s[i] == 'i') { 
r[3] ++; 
} else if (s[i] == 'u') { 
r[4] ++; 
} else if (s[i] == 'y') { 
r[5] ++; 
} 
} 
return r; 
} 

int main() { 
char f[] = {'a', 'e', 'o', 'i', 'u', 'y'}; 
int t1[6], t2[6], t3[6]; 
int a[] = { 3, 0, 0, 0, 0, 0}; 
int b[] = {0, 0, 0, 0, 0, 0}; 
int c[] = {2, 3, 2, 2, 2, 0}; 
bool test = false; 
for (int i = 0; i < (sizeof(f) / sizeof(f[0])); i++) { 
t1[i] = *(func("da da da") + i); 
t2[i] = *(func("") + i); 
t3[i] = *(func("aiuofer oei ufd ae") + i); 
} 
for (int i = 0; i < (sizeof(f) / sizeof(f[0])); i++) { 
if (t1[i] != a[i] || t2[i] != b[i] || t3[i] != c[i]) { 
test = true; 
} 
} 
if (!test) { 
cout << "Nekkorektno"; 
return 1; 
} else { 
cout << "Korrektno"; 
} 
return 0; 
}
