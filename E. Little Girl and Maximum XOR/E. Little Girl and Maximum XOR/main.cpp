#include <iostream>
typedef long long ll;
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    if((m-n)<=1)
    {
        ll x=n^m;
        cout<<x<<endl;

    }
    else
    {
        for(int i=60; i>=0; --i)
        {
            if((n>>i)!=(m>>i))
            {
                //(1ll<<(i+1)) to increase bit zero first
                //and then subract one to make the number equal 011111

                cout<<((1ll<<(i+1))-1)<<endl;
                break;
            }
        }

    }


    return 0;
}
