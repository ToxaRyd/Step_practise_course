#include <iostream>
using namespace std;

int main()
{
   int h1, m1, s1, h2, m2, s2;
   cin >> h1;
   cin >> m1;
   cin >> s1;
   cin >> h2;
   cin >> m2;
   cin >> s2;

   h1 = (h1*60)*60 + m1*60 + s1;
   h2 = (h2*60)*60 + m2*60 + s2;

   cout << h2 - h1;
}