#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long x=n^(n-1);
        cout<<__builtin_popcount(x)<<endl;
    }
    return 0;
}
