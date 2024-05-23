#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    long long  n,k;
    cin>>n>>k;
    long long  cntr=0;
    for(int i=0;i<n;i++)
    {
        char c;
        long long  x;
        cin>>c>>x;
        if(c=='+')
        {
            k+=x;
        }
        else if(c=='-'&&k>=(abs(x)))
        {
            k-=x;
        }
        else if(k<(abs(x)))
        {
            cntr++;
        }
    }
    cout<<k<<" "<<cntr<<endl;
    return 0;
}
