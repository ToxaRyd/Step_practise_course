#include <iostream>
using namespace std;

int main()
{
   int a, b, c, d, e;
   cin >> a;
   cin >> b;
   cin >> c;

   d = a*c;
   e = b*c;
   if (e > 99) {
   	d += e/100;
   	e = e%100;
   }
   cout << d << ' ' << e;
}