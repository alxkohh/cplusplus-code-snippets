/*
A function to convert char to int. Eg. '7' -> 7
Although there is stoi, we also often require a ctoi.
Obviously, those are single digit cases. '6', '2' etc.
If more than 2 digits or with negative sign, we use stoi.
*/


#include <bits/stdc++.h>
using namespace std;


int ctoi(char c) {
    int i = c - '0';    // ASCII magic in action!
    return i;
}

int main() {

    char c = '8';
    int i = ctoi(c);
    int j = i + 2;

    cout << j;

    return 0;
}
