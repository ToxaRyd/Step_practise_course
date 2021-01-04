#include <iostream>
using namespace std;

int main() {
    int N, n;
    cin >> N;
    n = 2;

    while (N%n != 0) {
    	n += 1;
    }
    cout << n;
}
