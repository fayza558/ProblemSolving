
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {

        int n;
        cin >> n;
        map<int, int> mp;
        long long totalPairs = 0;

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            int mask = 0;


            for (char c : s) {
                int val = c - 'a';
                mask ^= (1 << val);
            }

            totalPairs += mp[mask];


            for (int j = 0; j < 26; j++) {
                int tempMask = mask ^ (1 << j);
                totalPairs += mp[tempMask];
            }


            mp[mask]++;
        }

        cout << totalPairs << endl;


    return 0;
}

