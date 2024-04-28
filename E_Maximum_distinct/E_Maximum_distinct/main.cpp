#include <iostream>
#include <climits>
#include <set>
#include <map>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin>>s;
    set<char> st;
    map<char, int> mp;



    for (int i = 0; i < k; i++)
    {
        mp[s[i]]++;
        st.insert(s[i]);
    }

    int p1 = 0, p2 = k - 1, ans = st.size();

    while (p2 < n - 1)
    {
        mp[s[p1]]--;
        if (mp[s[p1]] == 0)
        {
            st.erase(s[p1]);
        }
        p1++;

        p2++;
        mp[s[p2]]++;
        st.insert(s[p2]);

        ans = max(ans, (int)st.size());
    }
    cout << ans << endl;

    return 0;
}
