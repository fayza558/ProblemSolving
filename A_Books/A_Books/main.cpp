#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int p1=0,p2=0;
    int sum=0;
   int max_len = 0;
    while(p2<n)
    {
        if(sum+arr[p2]<=t)
        {

                sum+=arr[p2];

                max_len=max(max_len,p2-p1+1);
                 p2++;

        }
        else
        {

            sum-=arr[p1];
            p1++;

        }

    }

        cout<<max_len<<endl;

    return 0;
}



