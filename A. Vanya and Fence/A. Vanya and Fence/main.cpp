#include <iostream>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int arr[n];
    int cntr=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>h)
        {
            cntr+=2;

        }
        else cntr++;
    }
    cout<<cntr<<endl;
    return 0;
}
