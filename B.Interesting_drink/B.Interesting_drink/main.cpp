#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int shops[n];

    for(int i = 0; i < n; i++)
    {
        cin >> shops[i];
    }

    sort(shops, shops + n);

    int q;
    cin >> q;

    while(q--)
    {
        int coin;
        cin >> coin;

        int l = 0, r = n - 1, mid;

        while(l <= r)
        {
            mid = (l + r) / 2;

            if(shops[mid] <= coin)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << l << endl;
    }

    return 0;
}

