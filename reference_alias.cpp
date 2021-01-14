/*
When it comes to programming and computers (eg. UNIX systems), aliases are often useful.
We typically like to give a short alias to a long name, for convenience in typing.

C++ allows us to do that, by using reference. Examples are in lines 20 and 30.
Line 20 creates an "int reference", while line 30 creates a "vector reference".
*/


#include <bits/stdc++.h>
using namespace std;


int main() {

    int insanelyLongName = 7;

    // time to create an alias!

    int& alias = insanelyLongName;  // just append an ampersand & behind the data type. The data type is a "int reference"!
    
    alias = 11;
    cout << insanelyLongName << "\n";   // 11


    // now for another example. This time using STL vectors.

    vector<int> superLongNameVec = {5,6,7,1};

    vector<int>& aliasVec = superLongNameVec;   // data type is "vector reference"

    aliasVec[3] = 8;
    cout << superLongNameVec[3] << "\n";    // 8

    return 0;
}
