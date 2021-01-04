#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    if (n <= m && n <= x) {
    	if (m <= x) {
    		cout << n << ' ' << m << ' ' << x;
    	}
    	else {cout << n << ' ' << x << ' ' << m;}
    }
    else if (m <= n && m <= x) {
    	if (n <= x) {
    		cout << m << ' ' << n << ' ' << x;
    	}
    	else {cout << m << ' ' << x << ' ' << n;}
    }
    else if (x <= n && x <= m) {
    	if (n <= m) {
    		cout << x << ' ' << n << ' ' << m;
    	}
    	else {cout << x << ' ' << m << ' ' << n;}
    }
}