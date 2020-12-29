#include <iostream>
using namespace std;

int main()
{
   int a, b, c;
   cin >> a;
   if (a%2 == 1) {
   	a = (a+1)/2;
   } else {
   	a = a/2;
   }

   cin >> b;
   if (b%2 == 1) {
   	b = (b+1)/2;
   } else {
   	b = b/2;
   }

   cin >> c;
   if (c%2 == 1) {
   	c = (c+1)/2;
   } else {
   	c = c/2;
   }
   cout << (a + b + c);
}