#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        vector<vector<string>> v(3, vector<string>(n));
        vector<int> ans(3, 0);
        map<string, int> m;


        for(int i = 0; i < 3; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                cin >> s;
                v[i][j] = s;
                m[s]++;
            }
        }


        for(int i = 0; i < 3; ++i)
        {
            for(const auto& word : v[i])
            {
                if(m[word] == 1)
                {
                    ans[i] += 3;
                }
                else if(m[word] == 2)
                {
                    ans[i] += 1;
                }
            }
        }


        cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    }
    return 0;
}
