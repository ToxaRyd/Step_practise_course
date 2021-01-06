#include <iostream>
using namespace std;

int main() {
	int n = 0, x = 0, y = 1, c = 1;
	cin >> n;

	while (n !=0) {
		if (n == x) {
			c += 1;
		}
		if (n != x) {
		    if (c > y) {y = c; c = 1;}
		    else {c = 1;}
		}
		x = n;
		cin >> n;
	}
	if (y > c) {cout << y;}
	else {cout << c;}
	return 0;
}