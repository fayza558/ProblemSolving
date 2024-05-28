#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    int minn=INT_MAX,maxx=INT_MIN;
    int a1=0,a2=0,b1=0,b2=0;
       if(i==0)
       {
           maxx=abs(arr[n-1]-arr[0]);
           minn=abs(arr[1]-arr[0]);
       }
       else if(i==n-1)
       {
           maxx=abs(arr[n-1]-arr[0]);
           minn=abs(arr[n-1]-arr[n-2]);
       }
       else
       {
           a1=abs(arr[i]-arr[i-1]);
           a2=abs(arr[i]-arr[i+1]);
           minn=min(a1,a2);
           b1=abs(arr[i]-arr[n-1]);
           b2=abs(arr[i]-arr[0]);
           maxx=max(b1,b2);
       }
       cout<<minn<<" "<<maxx<<endl;
    }

}



