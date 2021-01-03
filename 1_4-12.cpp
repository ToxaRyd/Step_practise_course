#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int n, m, x, y, i, o;
    cin >> n >> m >> x >> y;

    if (n > m) {
        i = min(abs(n - y), y);
        o = min(abs(m - x), x);
    }
    else {
        i = min(abs(m - y), y);
        o = min(abs(n - x), x);
    }

    if (i < o) {
        cout << i;
    }
    else {
        cout << o;
    }
}