
#include <iostream>
typedef long long ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll mask = 0;

        // Find the smallest y such that x & y > 0 and x ^ y > 0
        for (int i = 0; i <= 30; i++) {
            if ((n >> i) & 1) {
                mask = (1ll << i);
                break;
            }
        }

        // If n is a power of two, we need to adjust our approach
        if (__builtin_popcountll(n) == 1) {
            for (int i = 0; i <= 30; i++) {
                if (!((n >> i) & 1)) {
                    mask |= (1ll << i);
                    break;
                }
            }
        }


        cout << mask << endl;
    }

    return 0;
}



/*#include <iostream>
typedef long long ll;
using namespace std;
#define isOn(n, k) ((n >> k) & 1)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int mask=0;
        for(int i=0;i<=30;i++)
        {
            if(((n >> k) & 1)
            {
                mask=(1ll<<1);
                break;
            }
        }
        if(__builtin_popcount(n)==1)
        {
       for(int i=0;i<=30;i++)
        {
            if(!(((n >> k) & 1))
            {
                mask|=(1ll<<1);
                break;
            }
        }
        }
        cout<<mask<<endl;

    }

    return 0;
}

*/

/*
#include <iostream>
typedef long long ll;
using namespace std;
#define isOn(n, k) ((n >> k) & 1)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll mask = 1;

        if (__builtin_popcountll(n) == 1)
        {
            mask = n + 1;
        }
        else
        {
            for (int i = 0; i <= 30; i++)
            {
                if (!isOn(n, i))
                {
                    mask = (1ll << i);
                    break;
                }
            }
        }

        cout << mask << endl;
    }

    return 0;
}


#include <iostream>
typedef long long ll;
using namespace std;

#define isOn(n,k) ((n >> k) & 1)

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        ll y = 1;

        if (__builtin_popcountll(x) == 1) {

            y = x + 1;
        } else {

            for (int i = 0; i < 30; i++) {
                if (!isOn(x, i)) {
                    y = (1LL << i);
                    break;
                }
            }
        }

        cout << y << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned int x;
        cin >> x;


        unsigned int y = 1;

        while ((x & y) == 0 || (x ^ y) == 0) {
            y++;
        }
        cout << y << endl;
    }
    return 0;
}



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<unsigned int> results(t);

    for (int i = 0; i < t; ++i) {
        unsigned int x;
        cin >> x;

        if (x % 2 != 0) {
            // If x is odd, the lowest unset bit is the second bit (i.e., y = 1)
            results[i] = 1;
        } else {
            // If x is even, find the smallest y such that x & y > 0 and x ^ y > 0
            unsigned int y = 1;
            while ((x & y) != 0) {
                y <<= 1;
            }
            results[i] = y;
        }
    }

    for (int i = 0; i < t; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}

*/
