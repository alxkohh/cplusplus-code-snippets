/*
A function to determine if the k-th bit of a bit string is set.
A bit is "set" means it is turned on / digit 1.

0th bit is the left most bit. Officially called the LSB, least significant bit.
*/


#include <bits/stdc++.h>
using namespace std;


bool isKthBitSet(int bitString, int k) {

    int mask = 1;
    int shiftedMask = 1 << k;

    return bitString & shiftedMask;
}

int main() {

    if (isKthBitSet(5, 2)) {
        cout << "yes";
    } else {
        cout << "no";
    }

    // Since 5 is 101 in binary, "yes" is printed out

    return 0;
}
