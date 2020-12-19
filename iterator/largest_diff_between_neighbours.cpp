#include <bits/stdc++.h>
using namespace std;


int main() {

    // Given a vector v, print out the largest difference between 2 adjacent elements in v
    vector<int> v = {5,6,2,1,9};

    int largestDiff = abs(v[1] - v[0]);

    for (int i = 0; i < v.size() - 1; ++i) {
        int diff = abs(v[i+1] - v[i]);
        
        if (diff > largestDiff) {
            largestDiff = diff;
        }
    }

    cout << largestDiff << "\n";

    // Given a map m, print out the largest difference between 2 adjacent elements in m
    map<string, int> m = {{"c", 6}, {"a",2}, {"b",7}};  // regardless of how the literal was declared, internally, pairs are always sorted by key in a map

    int firstVal = m.begin()->second;
    int secondVal = next(m.begin())->second;

    int largestDiff2 = abs(secondVal - firstVal);

    for (auto it = m.begin(); it != prev(m.end()); ++it) {

        int currVal = it->second;
        int nextVal = next(it)->second;

        int diff = abs(nextVal - currVal);

        if (diff > largestDiff) {
            largestDiff2 = diff;
        }
    }

    cout << largestDiff2 << "\n";

    /* 
        The idea is, for such problems, we need access to the index i in the case of a vector.
        In the case of a map, we can't access element by index, so how do we pinpoint locations in the map?

        Use iterator!
        prev() and next() can help you access prev or next positions in the map
    */

    return 0;
}
