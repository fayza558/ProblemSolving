

#include <iostream>
#include <cmath>
using namespace std;

long long inWhichRow(long long n) {
    long long left = 1, right = static_cast<long long>(sqrt(2.0 * n)) + 1;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if ((mid * (mid + 1)) / 2 < n) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << inWhichRow(n) << endl;
    }

    return 0;
}
