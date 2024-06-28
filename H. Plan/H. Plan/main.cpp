/*#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int n, q;
vector<long long> v;

bool isExist(long long k) {
    int l = 0;
    int r = n - 1;
    int mid;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (v[mid] > k) {
            r = mid - 1;
        } else if (v[mid] < k) {
            l = mid + 1;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    cin >> n >> q;
    v.resize(n);
    map<long long, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]] = i + 1;
    }
    sort(v.begin(), v.end());
    while (q--) {
        long long x;
        cin >> x;
        if (isExist(x)) {
            cout << "YES " << mp[x] << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> v(n);
    map<long long, int> mp;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]] = i + 1;
    }

    while (q--) {
        long long x;
        cin >> x;
        if (mp.find(x) != mp.end()) {
            cout << "Yes " << mp[x] << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}


