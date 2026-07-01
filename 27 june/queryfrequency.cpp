#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    map<int, int> freq;

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {
        int x;
        cout << "Enter element to search: ";
        cin >> x;

        cout << x << " appears " << freq[x] << " time(s)." << endl;
    }

    return 0;
}