#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n-1; i++) {
        if (a[i] > 0 && a[i-1] > 0) {
                if (a[i] > a[i-1]) {
                    cout << a[i-1] << ' ' << a[i];
                }
                else {cout << a[i] << ' ' << a[i-1];}
        break;
        }
        else if (a[i] < 0 && a[i-1] < 0){
                if (a[i] > a[i-1]) {
                    cout << a[i-1] << ' ' << a[i];
                }
                else {cout << a[i] << ' ' << a[i-1];}
        break;
        }
    }
  return 0;
}