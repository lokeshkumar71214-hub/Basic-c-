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

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxElement = arr[0];
    int maxCount = 0;

    // Find the element with maximum frequency
    for (auto x : freq) {
        if (x.second > maxCount) {
            maxCount = x.second;
            maxElement = x.first;
        }
    }

    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}
