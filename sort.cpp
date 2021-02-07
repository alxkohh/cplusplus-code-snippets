/*
Many problems require a sorting step in the solution.
STL has an efficient sort function. By default, it sorts the container (typicall an array or vector)
in ascending order. But we can also use a custom comparator if we want to.

This file illustrates the following

1. Sort an array
2. Sort a vector
3. How does a custom compare function work?
*/


#include <bits/stdc++.h>
using namespace std;

/*
    Here's how the compare function work.
    A compare function will always return a boolean.
    If this compare function returns true, we put a in front.
    Otherwise, we put b in front.

    For this implementation, if a is bigger, we put it in front.
    ie. descending order
*/

bool compare(int a, int b) {
    return a > b;
}

// Here's is a more creative compare function

bool cmp(string a, string b) {
    return a + b > b + a;
}


int main() {
    
    // 1. Sort an array
    int arr[3] = {1,7,2};       // 1,2,7
    sort(arr, arr + 3);

    // 2. Sort a vector
    vector<int> v = {1,7,2};
    sort(v.begin(), v.end());   // 1,2,7

    // 3. Sort using custom comparator
    sort(v.begin(), v.end(), compare);   // 7,2,1

    return 0;
}
