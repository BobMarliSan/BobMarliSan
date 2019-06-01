# include < stdio.h>
# include < string>
#include <iostream>
using namespace std;

void Func(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == ' O' || str[i] == ' U') {
            str[i] = tolower(str[i]);
        }
    }
}
int main() {
    string str;
    getline(cin, str);
    Func(str);
    cout << str << endl;
    return 0;

}
