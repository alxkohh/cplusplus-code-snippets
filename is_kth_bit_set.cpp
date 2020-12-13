/*
A function to determine if the k-th bit of a bit string is set.
A bit is "set" means it is turned on / digit 1.

0th bit is the right most bit. Officially called the LSB, least significant bit.
*/


#include <bits/stdc++.h>
using namespace std;


bool isKthBitSet(int bitString, int k) {

    int mask = 1;
    int shiftedMask = 1 << k;

    return bitString & shiftedMask;
}

int main() {

    if (isKthBitSet(10, 3)) {
        cout << "yes";
    } else {
        cout << "no";
    }

    // Since 10 is 1010 in binary, the 3rd bit is 1. Hence "yes" is printed out

    return 0;
}
