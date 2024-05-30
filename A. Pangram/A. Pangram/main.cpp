#include <iostream>
#include<set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    set<char>sett;
    for(int i=0;i<s.size();i++)
    {
        sett.insert(s[i]);
    }
    if(sett.size()==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}




