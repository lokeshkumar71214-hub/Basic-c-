#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;   // Pointer stores the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num using &: " << &num << endl;
    cout << "Address of num using pointer: " << ptr << endl;

    return 0;
}