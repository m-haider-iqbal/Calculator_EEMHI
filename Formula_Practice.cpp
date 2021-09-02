#include <iostream>
#include <cmath>

using namespace std;

float a ;
float b ;
float aa, bb, cc, dd, ee;
double res;


int main()
{
    cout<<"Please Enter the Value of a & b\n";
    cin>>a;
    cin>>b;
    aa = pow(a,2);
    bb = pow(b,2);
    cc = (2*a*b);
    dd = pow(a,(1/2));
    ee = pow(b,3);

    res = aa + bb + cc - ( dd * ee);
    
    cout<<res;

    return 0;
}
