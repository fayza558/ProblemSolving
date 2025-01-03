/*
//o(n)
#include <iostream>
#include<cmath>
#define ll long long
using namespace std;
long long mod=1e9+7;
int main()
{
    ll n;
    ll ans=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ans=(ans*2)%mod;
    }
    cout<<ans<<endl;
    return 0;
}
*/
#include <iostream>
#include<cmath>
#define ll long long
using namespace std;
long long mod=1e9+7;
// b =2 ,p any num
int power(int b,int p){
    if(p==0) return 1;
    if(p==1) return b;
    int ret=power(b,p/2);
    ret=1LL *ret*ret%mod;
    if(p%2==1){
        ret=1LL *ret*b%mod;
    }
    return ret;
}
int main()
{
    ll n;
    cin>>n;
    cout<<power(2,n)<<endl;
    return 0;
}
