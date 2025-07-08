#include <iostream>
using namespace std;

int swapUsingVariable(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    return a, b;
}

int swapUsingBuiltInFunc(int& a, int& b) {
    swap(a, b);
    return a, b;
}

int main() {
    int a=0, b=0, temp=0;
    cin >> a;
    cin >> b;

    // swapUsingVariable(a, b);
    swapUsingBuiltInFunc(a, b);
    cout << "a = " << a << ", b = " << b << endl;
}