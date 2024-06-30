#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int res[n+1]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int c=1; c<=n; c++)
    {
        for(int i=0; i<n; i++)
        {
            int cntr=0;
            for(int j=0; j<n; j++)
            {
                if(arr[i][j]==c)
                {
                   cntr++;
                }
            }
            if(cntr==n-c&&!res[i+1])
            {
                res[i+1]=c;
                break;
            }
        }
    }

        for(int j=1;j<=n;j++)
        {
            cout<<res[j]<<" ";
        }
    return 0;
}
