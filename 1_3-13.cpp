#include <iostream>
using namespace std;

int main(){
    int n, n1=0;
    cin >> n;
    for (int i = 0; i < 2; i++)
    {
        n1 *= 10;
        n1 += n % 10;
        n /= 10;
    }
    cout << n - n1 + 1;
}