#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    
    if (k < 3 || k > 2 * n - 1) {
        cout << 0;
        return 0;
    }
    
    long long L = max(1LL, k - n);
    long long R = min((k - 1) / 2, n - 1);
    
    cout << (L > R ? 0 : R - L + 1);
    
    return 0;
}