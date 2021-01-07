#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double x, y, z;
    cin >> x;
    y = modf(x, &z);
    cout << y;
}