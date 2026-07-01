#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int *ptr = arr;  // Pointer points to the first element of the array

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    cout << "Sum of array elements = " << sum << endl;

    return 0;
}