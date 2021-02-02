/*
In C++, numbers have a size limit. 4 bytes for int, 8 bytes for long long.
If we add two large numbers a and b, there are cases where the sum
exceed 8 bytes, ie. overflow.

A simple trick is to treat a and b as strings, perform addition algorithm on them,
and return the sum as a string.

Of course, the downside to this approach is time complexity. Manually running
the addition algorithm takes O(n) running time, where n is the number of digits.
Whereas the primitive + operator performs addition in O(1) time.
*/


#include <bits/stdc++.h>
using namespace std;


int ctoi(char c) {

    int i = c - '0';    // ASCII magic in action!
    return i;
}

void padWithLeadingZeroes(string& s, int numOfLeadingZeroes) {

    string leadingZeroes;

    for (int i = 0; i < numOfLeadingZeroes; ++i) {

        leadingZeroes += '0';
    }

    s = leadingZeroes + s;
}

string add(string& a, string& b) {

    if (a.size() > b.size()) {
        
        // b is shorter, so pad b with leading zeroes

        int numOfLeadingZeroes = a.size() - b.size();
        padWithLeadingZeroes(b, numOfLeadingZeroes);

    } else if (b.size() > a.size()) {
        
        // a is shorter, so pad a with leading zeroes

        int numOfLeadingZeroes = b.size() - a.size();
        padWithLeadingZeroes(a, numOfLeadingZeroes);
    }


    string res;

    int carry = 0;

    int n = a.size();

    // for n-1 to 1
    
    for (int i = n - 1; i >= 1; --i) {

        char digit1 = a[i];
        char digit2 = b[i];

        int d1 = ctoi(digit1);
        int d2 = ctoi(digit2);

        int sum = d1 + d2 + carry;

        if (sum > 9) {

            carry = 1;

            int secondDigit = sum % 10;
            res += to_string(secondDigit);
        } else {

            carry = 0;

            res += to_string(sum);
        }
    }

    char digit1 = a[0];
    char digit2 = b[0];

    int d1 = ctoi(digit1);
    int d2 = ctoi(digit2);

    int sum = d1 + d2 + carry;

    if (sum > 9) {

        // append second digit
        int secondDigit = sum % 10;
        res += to_string(secondDigit);

        sum /= 10;

        // append first digit
        res += to_string(sum);

    } else {
        res += to_string(sum);
    }
    
    reverse(res.begin(), res.end());

    return res;
}

int main() {

    string a = "199";
    string b = "1";
    string sum = add(a, b);

    cout << sum;    // 200 printed to console

    return 0;
}
