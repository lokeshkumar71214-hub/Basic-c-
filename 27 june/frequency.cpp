#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "\nFrequency of each number:\n";
    for (auto x : freq) {
        cout << x.first << " appears " << x.second << " time(s)" << endl;
    }

    return 0;
}