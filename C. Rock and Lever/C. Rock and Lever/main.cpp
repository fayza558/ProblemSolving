#include <iostream>
#include <map>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<long long, long long> m;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            long long MSB = log2(x);
            m[MSB]++;
        }
        long long cntr = 0;
        for (auto it : m)
        {
            // number of pairs
            cntr += (it.second * (it.second - 1)) / 2;
        }
        cout << cntr << endl;
    }
    return 0;
}



#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        long long  n;
        cin>>n;
        long long  arr[n];
        long long freq[65]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            long long  MSB=63-(__builtin_clzll(arr[i]));
            freq[MSB]++;
        }
        long long ans=0;
        for(int i=0;i<65;i++)
        {
            long long  m=freq[i];
            ans+=(m*(m-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

