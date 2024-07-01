#include <iostream>
#include<map>
#include<algorithm>
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
        int ans=INT_MIN;
        map<int ,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]=i;

        }
        for(int i=1;i<=1000;i++)
        {
            for(int j=i;j<=1000;j++)
            {
                if(mp[i]!=0&&mp[j]!=0&&__gcd(i,j)==1)
                {
                    ans=max(ans,mp[i]+mp[j]);
                }
            }
        }
        if(ans==INT_MIN)
        {
            cout<<-1<<endl;
        }
        else
        {
           cout<<ans<<endl;
        }
    }
    return 0;
}
