#include <bits/stdc++.h>
using namespace std;


int main() {

    // Given a vector v, print out the difference between 2 adjacent elements in v
    vector<int> v = {5,6,2,1,9};

    for (int i = 0; i < v.size() - 1; ++i) {
        int diff = abs(v[i+1] - v[i]);
        cout << diff << " ";
    }   

    cout << "\n";

    // Given a map m, print out the difference between 2 adjacent elements in m
    map<string, int> m = {{"c", 6}, {"a",2}, {"b",7}};  // regardless of how the literal was declared, internally, pairs are always sorted by key in a map

    for (auto it = m.begin(); it != prev(m.end()); ++it) {
        int currVal = it->second;
        int nextVal = next(it)->second;
        
        int diff = abs(nextVal - currVal);
        cout << diff << " ";
    }    

    /* 
        The idea is, for such problems, we need access to the index i in the case of a vector.
        In the case of a map, we can't access element by index, so how do we pinpoint locations in the map?

        Use iterator!
        prev() and next() can help you access prev or next positions in the map
    */

    return 0;
}
