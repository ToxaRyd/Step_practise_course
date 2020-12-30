#include <iostream>
using namespace std;

int main()
{
   int v, t;
   cin >> v;
   cin >> t;
   cout << (109 + (v*t)%109)%109;
}