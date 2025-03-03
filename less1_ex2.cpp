#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if ((a == b) || (a == b + 1) || (b == a + 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}