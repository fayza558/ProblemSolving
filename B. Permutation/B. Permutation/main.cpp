#include <iostream>
#include<set>
using namespace std;

int main()
{
    set<int>sett;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x<=n)
        {
            sett.insert(x);
        }

    }
    if(sett.size()==n)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<n-sett.size()<<endl;
    }
    return 0;
}
