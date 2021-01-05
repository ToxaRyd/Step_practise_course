#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;
    
    while (n != 0) {
    	if (n > x) {
    		x = n;
    	}
    	cin >> n;
    }
    cout << x;
}