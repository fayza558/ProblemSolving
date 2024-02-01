
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr1[n];
    int arr2[m];


    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }


    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }


    sort(arr1, arr1 + n);


    for (int i = 0; i < m; ++i) {
        // Use binary search to find the count
        int count = upper_bound(arr1, arr1 + n, arr2[i]) - arr1;
        cout << count << " ";
    }

    return 0;
}

