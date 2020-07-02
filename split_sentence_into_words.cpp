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
    
    for (int i = 0; i < sentence.size(); i++) {
        
        if (sentence.at(i) != ' ') {
            word = word + sentence.at(i);
            
            // we are at EOF already. no more space to meet.
            // just left with pushing the final word into the vector.
            if (i == sentence.size() - 1) {
                words.push_back(word);
            }
        } else {
            // meet space means word is complete. push it into vector.
            words.push_back(word);
            word = "";
        }
    }

    return words;
}
