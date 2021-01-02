#include <iostream>
using namespace std;

int main() {
    int x1, x2, y;
    cin >> x1 >> x2 >> y;

    if (x1*x2 > y) {
    	if ((y%x1 == 0) || (y%x2 == 0)) {
    		cout << "YES"
    	}
    	else {
    		cout << "NO"
    	}
    }
    else {
    	cout << "NO"
    }
}