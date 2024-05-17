#include <iostream>
#include<map>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    map<char,int>m;
    for(auto it:s)
    {
        m[it]++;
    }
    if(m.size()==1)
    {
        cout<<-1<<endl;
        continue;
    }
    if(m.size()==4||m.size()==3)
    {
        cout<<4<<endl;
        continue;
    }
    if(m.size()==2)
    {
           int maxx = 0;
            for (auto [a, b] : m) {
                maxx = max(maxx, b);
            }

        if(maxx==2)
        {
            cout<<4<<endl;
        }
        else
        {
            cout<<6<<endl;
        }

    }

}
    return 0;
}

