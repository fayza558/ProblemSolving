#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long ans =0;
    for(int i=1;i<n;i++)
    {
        long long diff=arr[i-1]-arr[i];
        if(diff<=0)
        {
            continue;
        }
        arr[i]+=diff;
        long long MSB=63-__builtin_clzll(diff);
        ans=max(ans,MSB+1);
    }
    cout<<ans<<endl;
    }
    return 0;
}
