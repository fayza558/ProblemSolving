


#include <iostream>
#include <map>
#include <set>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char>sett(s.begin(),s.end());
    map<char,int>mp;
    int type=sett.size();
    int p1=0;
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
        while(mp.size()==type)
        {
            ans=min(ans,i-p1+1);
            mp[s[p1]]--;
            if(mp[s[p1]]==0)
            {
                mp.erase(s[p1]);
            }
            p1++;
        }
    }
    cout<<ans<<endl;

    return 0;
}
