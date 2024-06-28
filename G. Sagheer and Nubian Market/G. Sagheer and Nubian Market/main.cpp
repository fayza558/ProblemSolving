#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long  n,k;
const int oo=0x3f3f3f3f;
 vector<long long>v;
 long long sum,mid;
bool isFound()
{
    vector<long long>prices(n);
    for(int i=0;i<n;i++)
    {
        prices[i]=v[i]+mid*(i+1);
    }
    sort(prices.begin(),prices.end());
    sum=0;
    for(int i=0;i<mid;i++)
    {
        sum+=prices[i];
    }

    return sum<=k;
}

int main()
{

    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=n;
    long long cost=oo;
    int ans=0;


    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(isFound())
        {
            ans=mid;
            cost=sum;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<" "<<cost;
    return 0;
}
