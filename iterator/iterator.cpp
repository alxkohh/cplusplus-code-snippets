/*
The traditional way to loop through a STL container is to use an iterator.
By deliberate design, an iterator behaves like a pointer which points to a specific position
in the container. In general, you can move the iterator forward and backward based on how you
want to traverse the container.

The advantage of using iterator based loops is that it is generic. It works for every STL container.
Whereas you can only use index based for loops when you are dealing with array and vector.

You can of course go for range based for loops aka "for each" loop. But actually range based for loop
is just syntactic sugar over iterator based loop. Also, you lose the ability to access a specific position
of the container if you use range based for loop. You can think of an iterator as an index that allows you to
access a specific position of the container, which is often very useful.
*/


#include <bits/stdc++.h>
using namespace std;


int main() {

    vector<int> v = {6,8,1,0,7};


    // Loop from first element to last element. end() points beyond the last element

    for (auto it = v.begin(); it != v.end(); ++it) {    // use auto for the iterator's data type
        
        cout << *it << " ";     // dereference to get the value

        *it += 2;   // after you dereference, you can modify the value!
    }

    cout << "\n";

    /*
        Loop from first element to second last element. end() points beyond the last element.
        prev() here returns a copy of the v.end() iterator, shifted leftwards by 1 position.
        To shift leftwards more, you can do prev(v.end(), 5). There is also a next() function.
    */

    for (auto it = v.begin(); it != prev(v.end()); ++ it) {
        cout << *it << " ";
    }

    cout << "\n";


    /*
        The above was quite trivial. The more tricky thing to accomplish is loop through a map,
        be it unordered or ordered, using iterators. Why is it tricky?
        Each element in a map is by default a key-value pair. It is not as simple as dereference
        to get the value.
        
        Here is a demo.
    */

    map<string, int> m;

    m["world"] = 1;
    m["hello"] = 5;

    for (auto it = m.begin(); it != m.end(); ++ it) {
        
        string k = it->first;   // this 2 lines are the main catch!
        int v = it->second;

        cout << k << " " << v << "\n";
    }

    /*
        Recall when do we use -> and .
        We use -> and . to access fields.
        If we have a pointer, use -> to access fields.
        If we have an object, use . to access fields.

        Iterators are somewhat like pointers so we use -> to obtain first and second of each pair in the map
    */

    return 0;
}
