/*
The system() function allows us to run bash/linux commands.
With the help of system(), we can write C++ programs that replace bash scripts or even
extend bash scripts, since we can utilise C++ features that do not exist in bash scripting.

Basically, the argument passed to the system() function is the command you want to execute
on your command line.
*/

#include <bits/stdc++.h>
using namespace std;

/*
Helper function called inside main()
For an explanation of this function, refer to std_string_to_char_ptr.cpp
*/
char* toCharPtr(string s) {
    return &*s.begin();
}

int main() {
    string lsCommand = "ls";
    system(toCharPtr(lsCommand));

    // same effect as typing 'ls' on cmd line

    return 0;
}
