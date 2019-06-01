#include <iostream>
#include <string>
using namespace std;
void Func(string s, int a, int e, int y, int u, int i, int o) {
    int t = 0, c = 0, h = 0, k = 0, m = 0, z = 0;
    for (int p = 0; p < s.length(); p++)
        if (s[p] == 'a') {
            t++;
        } else if (s[p] == 'e') {
        c++;
    } else if (s[p] == 'y') {
        h++;
    } else if (s[p] == 'u') {
        k++;
    } else if (s[p] == 'i') {
        m++;
    } else if (s[p] == 'o') {
        z++;
    }
}

int main() {
    int a = 0, e = 0, y = 0, u = 0, i = 0, o = 0;
    getline(cin, s);
    Func(a, e, y, u, i, o);
    cout << "a = " << t << "e = " << c << "y=" << h << "u = " << k << "i = " << m << "o = " << z << endl;
    return 0;
}

