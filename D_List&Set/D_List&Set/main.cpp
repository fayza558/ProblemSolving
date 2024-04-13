#include <iostream>
#include<list>
#include<set>
using namespace std;

int main()
{
    int n;
    cin>>n;
    list<int>listt;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        listt.push_back(x);
    }
    set<int>sett;
    for(int l:listt)
    {
        sett.insert(l);
    }
    cout<<sett.size()<<endl;
    return 0;
}
