#include <iostream>
using namespace std;

int main()
{
   int H, A, B, n, x;
   cin >> H;
   cin >> A;
   cin >> B;
   n = 1;
   x = A-B;
   while (H > A) {
   	A += x;
   	n += 1;
   }
   cout << n;
}