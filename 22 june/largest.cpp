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

    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    cout << "Largest element = " << largest << endl;

    return 0;
}