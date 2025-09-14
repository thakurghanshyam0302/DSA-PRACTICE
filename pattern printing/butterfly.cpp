#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"enter number of rows: ";
    cin >> n;

    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << "  ";

        // Print right stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; i--) {
        // Print left stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++)
            cout << "  ";

        // Print right stars
        for (int j = 1; j <= i; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
