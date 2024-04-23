#include <iostream>
#include<algorithm>
#include<math.h>
#include <climits>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+1];


    for(int i=1;i<=n;++i)
    {
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    int minn=(int)1e9;
    int res=1;
    for(int i=1;i<=n;++i)
    {
        int l=i,r=i+k-1;
        if(r<=n)
        {
            if(arr[r]-arr[l-1]<=minn)
            {
                res=l;
                minn=arr[r]-arr[l-1];
            }
        }


    }
    cout<<res<<endl;
    return 0;
}
