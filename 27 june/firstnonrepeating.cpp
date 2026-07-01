#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> freq;

    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
    }

    // Find the first character with frequency 1
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character: " << ch << endl;
            return 0;
        }
    }

    cout << "No non-repeating character found." << endl;

    return 0;
}