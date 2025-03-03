#include <iostream>
using namespace std;

int main() {
    long n, k;
    cin >> n >> k;
    
    if(k < 3 || k > 2*n - 1) {
        cout << 0;
        return 0;
    }
    

    long min_first; 
    if(k - n > 1) {
        min_first = k - n; 
    } else {
        min_first = 1; 
    }
    
    long max_first;
    if((k-1)/2 < n-1) {
        max_first = (k-1)/2; 
    } else {
        max_first = n-1; 
    }
    
    if(min_first > max_first) {
        cout << 0;
    } else {
        cout << (max_first - min_first + 1);
    }
    
    return 0;
}