#include <iostream>
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

    int *ptr = arr;   // Pointer points to the first element

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}