#include <iostream>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    while (n != 0) {
    	x +=1;
    	cin >> n;
    }
    cout << x;
}