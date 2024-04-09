
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int p1=0,p2=n-1;
    int cntr=0;
    while(p1<=p2)
    {
        if(arr[p1]+arr[p2]<=x)
        {
            p1++;

        }
         p2--;
         cntr++;
    }

    cout<<cntr<<endl;





    return 0;
}

      /*int cntr=0;
    int found=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int rem =x-arr[i];
        int cntr =upper_bound(arr+i+1,arr+n,rem)-lower_bound(arr+i+1,arr+n,rem);
        found+=cntr;
    }
    cout<<found<<endl;*/
