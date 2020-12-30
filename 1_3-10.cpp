#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   int ss, h, m, s;
   cin >> ss;
   m = ss/60;
   s = ss%60;
   h = (m/60)%24;
   m = m%60;
   cout << h << setfill('0') << ":" << setw(2) << m << ":" << setw(2) << s;
}