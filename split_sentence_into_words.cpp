// Splits a sentence into words.
// C++ currently does not have a built-in split() method

#include <bits/stdc++.h>
using namespace std;

int main() {

    // getline to read the entire line (sentence)
    string line;
    getline(cin, line);

    stringstream tokenStream(line);
    string token;
    vector<string> tokens;
    
    while (tokenStream >> token) {
        tokens.push_back(token);
    }

    // tokens now contain all the individual words

    return 0;
}
