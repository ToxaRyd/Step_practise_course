#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i, c = 0, d;
    cin >> n;
    vector <int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i <= n-1; i++) {
        if (a[i]%2 != 0 && a[i] != 0 && a[i] < d) {
        	d = a[i];
        }
        else {c++;}
    }
    
    if (c == n) {d = 0;}
    
    cout << d;
}