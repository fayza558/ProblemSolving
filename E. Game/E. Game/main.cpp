#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
       cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    while(k--)
    {
        cin>>q;
        int upp1=upper_bound(v.begin(),v.end(),q)-v.begin();
        cout<<(upp1==n?-1:v[upp1])<<endl;
    }
    return 0;
}
