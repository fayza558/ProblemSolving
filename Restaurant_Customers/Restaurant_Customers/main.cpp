/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int start, endd;
        cin >> start >> endd;
        v.push_back({start, 1});
        v.push_back({endd, -1});
    }

    sort(v.begin(), v.end());

    int actualCustomer = 0;
    int maxCustomer = 0;

    for (int i = 0; i < v.size(); i++) {
        actualCustomer += v[i].second;
        maxCustomer = max(maxCustomer, actualCustomer);
    }

    cout << maxCustomer << endl;

    return 0;
}


