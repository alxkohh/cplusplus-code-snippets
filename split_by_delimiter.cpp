/*
Split a string by char delimiter.
Analogous to python and java split() by char delimiter.
*/


#include <bits/stdc++.h>
using namespace std;

vector<string> splitByDelim(string str, char delim) {

    stringstream tokenStream(str);
    string token;
    vector<string> tokens;

    // the only difference between this function and the one in split.cpp is the while condition below

    while (getline(tokenStream, token, delim)) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {

    string line = "hello,world,from,github";
    vector<string> words = splitByDelim(line, ',');     // {"hello", "world", "from", "github"}

    return 0;
}
