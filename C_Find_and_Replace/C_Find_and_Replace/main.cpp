

/*#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, set<int>> mp;
        char alr = '1';
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]].insert(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                alr = '1';
            }
            else
            {
                alr = '0';
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {


                for (int index : mp[s[i]])
                {
                    s[index] = alr;
                }
            }
        }
        bool valid = true;
        for (int i = 0; i < s.size() - 1; ++i)
        {
            if (s[i] == s[i + 1])
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}*/

#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, set<int>> mp;
        char alr = '1';
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]].insert(i);
        }
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                alr = '1';
            }
            else
            {
                alr = '0';
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                for (int index : mp[s[i]])
                {
                    s[index] = alr;
                }
            }
        }
        bool valid = true;
        for (int i = 0; i < s.size() - 1; ++i)
        {
            if (s[i] == s[i + 1])
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
