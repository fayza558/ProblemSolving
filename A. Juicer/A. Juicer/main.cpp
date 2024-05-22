#include <iostream>

using namespace std;

int main()
{
    long long  n,b,d;
    cin>>n>>b>>d;
    long long  arr[n];
    long long  ans=0;
    int cntr=0;
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
        if(arr[i]<=b)
        {
            ans+=arr[i];
        }
       if(ans>d)
       {
           cntr++;
           ans=0;
       }

    }
     cout<<cntr<<endl;
    return 0;
}
