#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a;

    while (a != 0) {
    	b += a;
    	c += 1;
    	cin >> a;
    }
    cout << setprecision(11) << b/c;
    return 0;
}