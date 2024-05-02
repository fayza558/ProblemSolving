
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);



     int ans=1;
    for(int i=0; i<n; ++i)
    {
     int x=arr[i]+5;
     int l = 0, r = n - 1, mid;
        while(l <= r)
        {
            mid = (l + r) / 2;

            if(x<=5)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
            ans=max(ans,l-i);
        }

    }
 cout<<ans<<endl;

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int ans = 1;
    for(int i = 0; i < n; ++i)
    {
        int upper_limit = arr[i] + 5;
        int l =   , r = n - 1, mid;
        while(l <= r)
        {
            mid = (l + r) / 2;

            if(arr[mid] <= upper_limit)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
            ans = max(ans, l - i);
        }
    }
    cout << ans << endl;

    return 0;
}

