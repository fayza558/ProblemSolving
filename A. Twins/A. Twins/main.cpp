#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int cntr=0;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    sum/=2;

    for(int i=n-1;i>=0;i--)
    {
        ans+=arr[i];
        cntr++;
        if(ans>sum)
        {
            break;
        }
    }
    cout<<cntr<<endl;
    return 0;
}

