/*
Sometimes, we want to convert a single character to a string.
to_string(c) wouldn't work, because by default it reads that char as an int (ASCII value)

There is no built-in ctos but here is a simple implementation.
*/


#include <bits/stdc++.h>
using namespace std;


string ctos(char c) {

    string s;
    s += c;

    return s;
}

int main() {

    string s = ctos('A');
    cout << s;

    return 0;
}
