#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    x = n;
    while (n != 0) {
    	cin >> n;
    	x += n;
    }
    cout << x;
}