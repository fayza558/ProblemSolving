#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int home[n];
    int guest[n];
    int cntr=0;
    for(int i=0;i<n;i++)
    {
        cin>>home[i]>>guest[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(home[i]==guest[j])
            {
                cntr++;
            }
        }
    }
    cout<<cntr<<endl;

    return 0;
}
