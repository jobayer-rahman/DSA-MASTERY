#include <iostream>
using namespace std;

int getNthNumber(int a1, int a2, int n){
    return a1 + (n - 1) * (a2 - a1);
}

int main() {
    int a1 = 0, a2 = 0, n = 0;
    cin >> a1;
    cin >> a2;
    cin >> n;
    
    cout << getNthNumber(a1, a2, n) << endl;
}