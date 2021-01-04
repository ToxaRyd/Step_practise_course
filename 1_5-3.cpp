#include <iostream>
using namespace std;

int main() {
    int N, n;
    cin >> N;
    n = 1;

    while (n <= N) {
    	cout << n << ' ';
    	n *= 2;
    }
}