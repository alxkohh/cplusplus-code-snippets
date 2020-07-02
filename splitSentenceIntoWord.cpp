/*
Splits a sentence into words. Words are stored in a vector of strings. Basically emulates the java split method.
Standard library alternatives include strtok and string stream. This method is self implemented.
*/

#include <string>
#include <vector>
using namespace std;

vector<string> split(string sentence) {
    
    vector<string> words;
    
    string word = "";
    
    for (char c: sentence) {
        
        if (c != ' ') {
            word = word + c;
        } else {
            // word is complete. push it into vector.
            words.push_back(word);
            word = "";
        }
    }

    return words;
}
