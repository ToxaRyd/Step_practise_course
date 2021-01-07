#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    float a, b, c, p, s;    
    cin>>a>>b>>c;
    p=(a+b+c)/2.0;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<< s;
    return 0;
}