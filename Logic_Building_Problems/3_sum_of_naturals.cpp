#include <iostream>
using namespace std;

int getSumUsingLoop(int number) {
    int sum=0;
    for (int i=1; i<=number; i++) {
        sum += i;
    }
    return sum;
}


int getSumUsingFormula(int number) {
    return (number * (number + 1)) / 2;
}


int main() {
    int input_number = 0;
    cin >> input_number;

    // cout << getSumUsingLoop(input_number) << endl;
    cout << getSumUsingFormula(input_number) << endl;
}