#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
double c,t;
bool canSort(double n)
{

    return (c * n * log2(n) <= t);

}
int main()
{

    cin>>c>>t;
    double l=1,h=t/c;
    double mid;
    while(h-l>1e-7)
    {
         mid=l+(h-l)/2;
        if(canSort(mid))
        {
            l=mid;
        }
        else
        {
            h=mid;
        }
    }
    cout<<fixed<<setprecision(6)<<l<<endl;
    return 0;
}




