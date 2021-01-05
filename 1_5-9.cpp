#include <iostream>
using namespace std;

int main() {
    int n, c, x = 0;
    cin >> n;
    
    while (n != 0) {
        if ((n < x && n >= c) || n == x) {c = n;}
        if (n > x) {
            c = x;
            x = n;
        }
        cin >> n;
    }
    cout << c;
}