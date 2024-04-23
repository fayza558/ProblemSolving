
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for(int i=0; i<q; i++)
    {
        int a = 0, b = 0;
        string fun;
        cin >> fun;
        if (fun == "pop_back")
        {
            if (!s.empty())
                s.pop_back();
        }
        else if (fun == "front")
        {
            cout << s.front() << endl;
        }
        else if (fun == "back")
        {
            cout << s.back() << endl;
        }
        else if (fun == "sort")
        {
            cin >> a >> b;
            sort(s.begin() + min(a, b) - 1, s.begin() + max(a, b));
        }
        else if (fun == "reverse")
        {
            cin >> a >> b;
            reverse(s.begin() + min(a, b) - 1, s.begin() + max(a, b));
        }
        else if (fun == "print")
        {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        }
        else if (fun == "push_back")
        {
            char x;
            cin >> x;
            s.push_back(x);
        }
        else if (fun == "substr")
        {
            cin >> a >> b;
            cout << s.substr(min(a, b) - 1, max(a, b) - min(a, b) + 1) << endl;
        }
    }

    return 0;
}

