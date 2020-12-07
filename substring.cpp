/*
Analogous to Java substring(start, end) where start index is inclusive, end index is exclusive.
C++ does not have a substring method which takes in start and end indices.
We implement such a method by making use of STL substr(pos, len) method.
*/


#include <bits/stdc++.h>
using namespace std;

string substring(string s, int start, int end) {
    return s.substr(start, end - start);
}

int main() {
    string h = "hello";
    string sub = substring(h, 2, 5);
    cout << sub << "\n";    // llo
    return 0;
}
