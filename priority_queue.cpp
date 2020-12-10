/*
The STL priority queue is a Max heap.
This program illustrates how to instantiate a Max
priority queue from an array. ie. Build heap in O(n) time.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

    int nums[5] = {7,9,2,1,30};

    priority_queue<int> pq; // empty priority queue, which is not what we want

    priority_queue<int> maxPQ (nums, nums + 5);     // Build heap in O(n) time

    while (!maxPQ.empty()) {
        cout << maxPQ.top() << " ";
        maxPQ.pop();
    }

    // 30 9 7 2 1 printed out

    return 0;
}
