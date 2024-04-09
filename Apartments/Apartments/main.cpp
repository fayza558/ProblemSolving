#include <iostream>
#include <algorithm>
#include <cmath>
#include<vector>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>applicants(n);
    vector<int>apartments(m);
    for(int i=0;i<n;i++)
    {
        cin>>applicants[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>apartments[i];
    }
    sort(applicants.begin(),applicants.end());
    sort(apartments.begin(),apartments.end());
    int cntr=0;
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(abs(applicants[i]-apartments[j])<=k)
        {
            cntr++;
            i++;
            j++;
        }
        else if(applicants[i]<=apartments[j]-k)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout<<cntr<<endl;

    return 0;
}
