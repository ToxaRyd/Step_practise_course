#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    int N, n, x;
    cin >> N;
    n = 1;

    while (n*n <= N) {
    	x = n*n;
    	cout << x << ' ';
    	n +=1;
    }
}