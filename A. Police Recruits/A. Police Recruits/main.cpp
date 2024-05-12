#include <iostream>

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
    int crimes=0,policMan=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
        {
            if(policMan>0)
            {
                policMan--;
            }else {
                crimes++;
            }
        }
        else {
            policMan+=arr[i];
        }
    }
    cout<<crimes<<endl;
    return 0;
}
