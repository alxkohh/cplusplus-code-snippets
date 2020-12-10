/*
Split a string by whitespace.
Analogous to python and java split() by whitespace.
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> split(string str) {

    stringstream tokenStream(str);
    string token;
    vector<string> tokens;

    while (tokenStream >> token) {
        tokens.push_back(token);
    }

    return tokens;
}


int main() {

    string line = "hello world from github";
    vector<string> words = split(line);     // {"hello", "world", "from", "github"}

    return 0;
}
