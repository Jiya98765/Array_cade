#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;

    for(int i = 1; i <= num; i++) {
        int original = i, rev_num = 0;
        while (original) {
            rev_num = rev_num * 10 + (original % 10);
            original /= 10;
        }

        int square = i * i;
        int rev_square = rev_num * rev_num;

        int temp = rev_square, reversed_square = 0;
        while (temp) {
            reversed_square = reversed_square * 10 + (temp % 10);
            temp /= 10;
        }

        if (square == reversed_square) {
            cout << i << " ";
        }
    }

    return 0;
}
