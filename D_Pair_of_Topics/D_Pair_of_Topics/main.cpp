#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare (long a,long b)
{
    return a>b;
}


int main()
{
    int n;
    cin>>n;
    vector <long> a(n);
    vector <long> b(n);
    vector <long> c(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=a[i]-b[i];
    }

    sort(c.begin(),c.end(),compare);
    long long sum=0;
    int p1=0,p2=n-1;
    while(p1<=p2)
    {
        if(c[p1]+c[p2]>0)
        {
            sum+=p2-p1;
            p1++;
        }
        else
        {
            p2--;

        }

    }
    cout<<sum<<endl;


    return 0;
}
