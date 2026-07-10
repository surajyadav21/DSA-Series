#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
     for (int i = 1; i <= n; i++) {

        // Left Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            cout << " ";
        }

        // Right Stars (skip when middle row)
        if (i == n) {
            for (int j = 1; j < i; j++) {
                cout << "*";
            }
        } else {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
        }

        cout << endl;
    }

    // Lower Half
    for (int i = n - 1; i >= 1; i--) {

        // Left Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            cout << " ";
        }

        // Right Stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }



    return 0;
}