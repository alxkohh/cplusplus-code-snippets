/*
Splits a sentence into words.
Commonly required in coding challenges, during input reading.
Analagous to split() in Java and Python
*/


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
