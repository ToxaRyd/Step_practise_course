#include <math.h>
#include <iostream>

using namespace std;

int main()
{   
    double x, y, z, v;
    cin >> x >> y >> z;
    v = y*100 + z;
    v *= (1+x/100.0);
    cout << floor(v/100) << " " << round(v - 100*floor(v/100)) << endl;
    return 0;
}