#include <iostream>
#include <set>
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

    set<int> uniqueElements;

    for (int i = 0; i < n; i++) {
        uniqueElements.insert(arr[i]);
    }

    cout << "Unique elements are: ";
    for (int x : uniqueElements) {
        cout << x << " ";
    }

    return 0;
}