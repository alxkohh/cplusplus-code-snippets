/*
Removing whitespaces from a string is a common task.
No need for fancy std library functions and external libraries, this is a very simple implementation.
*/


#include <bits/stdc++.h>
using namespace std;


string removeWhitespaces(string &s) {

    string s2;

    for (char c : s) {
        if (c != ' ') {
            s2 += c;
        }
    }

    return s2;
}

int main() {

    string s = " hello   Wor  ld  !";
    string s2 = removeWhitespaces(s);
    
    cout << s2;

    return 0;
}
