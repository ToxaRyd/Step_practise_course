#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double a, b, c;
    double r1, r2;

    cin >> a >> b >> c;

    if (a != 0) {
        double discr = b * b - 4 * a * c;
        if (discr > 0) {
            r1 = (-b - sqrt(discr)) / (2 * a);
            r2 = (-b + sqrt(discr)) / (2 * a);
            cout << 2 << ' ' << min(r1, r2) << ' ' << max(r1, r2);
        }
        else if (discr == 0) {
            r1 = -b / (2 * a);
            cout << 1 << ' ' << r1;
        }
        else {
            cout << 0;
        }
    }
    else {
        if (b == 0 && c == 0) {
            cout << 3;
        }
        else if (b != 0) {
            r1 = -c / b;
            cout << 1 << ' ' << r1;
        }
        else {
            cout << 0;
        }
    }

    return 0;
}