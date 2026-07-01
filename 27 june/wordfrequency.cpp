#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    map<string, int> freq;
    string word;
    stringstream ss(sentence);

    // Count frequency of each word
    while (ss >> word) {
        freq[word]++;
    }

    cout << "\nWord frequencies:\n";
    for (auto x : freq) {
        cout << x.first << " : " << x.second << endl;
    }

    return 0;
}