// Foreach loop in C++
// Analogous to python's for in loop and java's enhanced for loop
// C++ officially calls it the range-based for loop

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> strings {"first", "second","third"};

    for (string s: strings) {
        cout << s << "\n";
    }

    return 0;
}
