/*
Instantiating STL heaps (priority queues) can be quite tricky.
It is not well documented, which is rare of the C++ community.

This program will demonstrate how to

1. Instantiate empty Max heap
2. Instantiate empty Min heap
3. Build Max heap in O(n) time, from vector
4. Build Max heap in O(n) time, from vector
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    // Preliminary note: STL heaps are Max heaps by default.

    // 1. Instantiate empty Max heap
    priority_queue<int> emptyMaxPQ;

    // 2. Instantiate empty Min heap
    priority_queue<int, vector<int>, greater<int> > emptyMinPQ;

    
    vector<int> v = {7,9,2,1,30};

    // 3. Build Max heap in O(n) time, from vector
    priority_queue<int> maxPQ (v.begin(), v.end());     // This bracket syntax is actually calling a constructor

    // 4. Build Min heap in O(n) time, from vector
    priority_queue<int, vector<int>, greater<int> > minPQ (v.begin(), v.end());

    while (!minPQ.empty()) {
        cout << minPQ.top() << " ";
        minPQ.pop();
    }

    // 1 2 7 9 30 printed out

    return 0;
}
