#include <iostream>
using namespace std;

int main() {
    int n = 0, c = 1, x = 0;
    cin >> n;
    
    while (n != 0) {
    	if (n > x) {
    		x = n;
    		c = 1;
    	}
    	cin >> n;
    	if (n == x) {
    		c += 1;
    	}
    }
    cout << c;
}