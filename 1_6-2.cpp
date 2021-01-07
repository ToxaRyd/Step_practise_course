#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int y;
    cin >> x;
    y = trunc(x*10);
    y = y%10;
    cout << y;
    return 0;
}