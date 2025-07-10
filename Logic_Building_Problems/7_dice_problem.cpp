#include <iostream>
using namespace std;

string getOppositeFaceOfDice(int n) {
    if (0 < n && n < 7) {
        return to_string(7 - n);
    }
    else {
        return "Wrong Number!";
    }
}


int main() {
    int input_number;
    cin >> input_number;
    cout << getOppositeFaceOfDice(input_number) << endl;
}