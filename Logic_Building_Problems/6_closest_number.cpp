#include <iostream>
#include <cstdlib>
using namespace std;

int getClosestNumber(int n, int m) {
    int q, n1, n2;
    q = n / m;
    
    n1 = m * q;

    if ((n1 * m) < 0) {
        n2 = m * (q - 1);
    }
    else {
        n2 = m * (q + 1);
    }

    if (abs(n - n1) < abs(n - n2)) {
        return n1;
    }
    return n2;
}


int main() {
    int n, m, closest;
    cin >> n;
    cin >> m;
    closest = getClosestNumber(n, m);
    cout << "Result : " << closest << endl;
}