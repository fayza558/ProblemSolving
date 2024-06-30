/*#include <iostream>
#include<vector>
using namespace std;
vector<long long >v;
long long mid,n,k;
/*
int fixed_window(int arr[],int n,int k)
{
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];

    }
    int l=0,r=k;
    int res=sum;
    whil(r<n)
    {
        sum+=arr[++r];
        sum-=arr[l];
        res=max(res,sum);
        l++;
        r++;
    }
    return res;

}
*/
/*
bool can()
{
    long long sum=0;
    long long l=0,r=0;
    while(r<n)
    {
        sum+=v[r];
        r++;
        if(r-l+1>mid)
        {
            if(sum>k)
            {
                return 0;
            }
            sum-=v[l];
            l++;
        }
    }
    return 1;
}


int main()
{

    cin>>n>>k;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=1,r=n;
    int ans=-1;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(can)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
*/



#include <iostream>
#include <vector>
using namespace std;

vector<long long> v;
long long n, k;

bool can(long long mid) {
    long long sum = 0;
    long long l = 0, r = 0;
    while (r < n) {
        sum += v[r];
        r++;
        if (r - l > mid) {
            sum -= v[l];
            l++;
        }
        if (sum > k) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> n >> k;
    v.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long l = 1, r = n;
    long long ans = -1;

    while (l <= r) {
        long long mid = l + (r - l) / 2;
        if (can(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
