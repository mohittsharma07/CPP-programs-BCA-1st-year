#include <iostream>
using namespace std; // Template function for swapping
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    float m = 1.5, n = 3.2;

    cout << "Before swapping (int): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping (int): x = " << x << ", y = " << y << endl;

    cout << "\nBefore swapping (float): m = " << m << ", n = " << n << endl;
    swapValues(m, n);
    cout << "After swapping (float): m = " << m << ", n = " << n << endl;
    return 0;
}