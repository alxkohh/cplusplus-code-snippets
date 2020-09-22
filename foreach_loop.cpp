/*
Foreach loop in C++
Analogous to Python's for in loop and Java's enhanced for loop
C++ officially calls it the range-based for loop
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> strings {"first", "second","third"};

    for (string s : strings) {
        cout << s << "\n";
    }

    return 0;
}
