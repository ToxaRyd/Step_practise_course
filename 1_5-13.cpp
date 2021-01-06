#include <iostream>
using namespace std;

int main() {
	int n = 0, x = 0, y = 0, c = 0;
	cin >> n;

	while (n !=0) {
		if (x > y && x > n) {
			c += 1;
		}
		y = x;
		x = n;
		cin >> n;
	}
	cout << c;
	return 0;
}