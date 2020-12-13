/*
The STL priority queue is a Max heap by default.
This program shows how to build a Max heap in O(n) time,
and how to build a Min heap in O(n) time.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    int nums[5] = {7,9,2,1,30};

    priority_queue<int> pq; // empty priority queue, which is not what we want

    priority_queue<int> maxPQ (nums, nums + 5);     // Build Max heap in O(n) time from array
    
    priority_queue<int, greater<int> > minPQ (nums, nums + 5);  // Build Min heap in O(n) time from array

    while (!maxPQ.empty()) {
        cout << maxPQ.top() << " ";
        maxPQ.pop();
    }

    // 30 9 7 2 1 printed out

    return 0;
}
