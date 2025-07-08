#include <iostream>
using namespace std;

int getSumOfSquareWithLoop(int n) {
    int sum = 0;
    for(int i=0; i<=n; i++) {
        sum += i*i;
    }
    return sum;
}

int getSumOfSquareWithFormula(int n) {
    return (n * (n + 1) * (2 * n + 1)) / 6;
}


int main() {
    int input_number = 0;
    cin >> input_number;

    // cout << getSumOfSquareWithLoop(input_number) << endl;
    cout << getSumOfSquareWithFormula(input_number) << endl;
}