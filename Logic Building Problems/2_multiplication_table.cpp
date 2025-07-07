#include <iostream>
using namespace std;


void timesTable(int n) {
    for (int i=1; i<=10; i++) {
        cout << n << " * " << i << " = " << n*i << endl;
    }
}


void timesTableWithRecursiveApproach(int n, int i=1) {
    if (i == 11) 
        return;
    cout << n << " * " << i << " = " << n*i << endl;
    i += 1;
    timesTableWithRecursiveApproach(n, i);
}

int main() {
    int input_number=0;
    cin >> input_number;
    // timesTable(input_number);
    timesTableWithRecursiveApproach(input_number);
    return 0;
}