#include <iostream>
using namespace std;

bool isEvenNum(int number) {
    /*
        By checking wheather the remainder is zero or not.
    */
    if (number % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

bool isEven(int number) {
    /*
        There is not any operation in this method.
        It just checks the bit of the number 
        for the even number the bit is always 0 and
        for odd the bit is 1 
    */
    if ((number & 1) == 0) {
        return true;
    } else {
        return false;
    }
}



int main() {
    int input_number;
    cin >> input_number;
    if (isEven(input_number)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}