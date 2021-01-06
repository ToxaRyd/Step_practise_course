#include <iostream>
using namespace std;

int main() {
	int n = 0, x = 0, y = 0, c = 0, d = 0, min = 0;
	cin >> n;

	while (1) {
	    if (n == 0 && c == 1) {d = -1; break;}
	    if (n == 0) {break;}
	    
		if (x > y && x > n) {
			c += 1;
		}
		
		if (c == 1) {d += 1;}
		if (c == 2) {
			if (min == 0 || d < min) {min = d;}
			d = 1;
			c = 1;
		}
		
		y = x;
		x = n;
		cin >> n;
	}
	
    if (((d < min && d > 0) && c != 1) || d == 0) {cout << d;}
    else {cout << min;}
    
	return 0;
}