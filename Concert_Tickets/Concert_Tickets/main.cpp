/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> ticketPrices(n);
    for (int i = 0; i < n; ++i) {
        cin >> ticketPrices[i];
    }

    sort(ticketPrices.begin(), ticketPrices.end());

    for (int i = 0; i < m; ++i) {
        int maxPrice;
        cin >> maxPrice;

        vector<int>::iterator it = upper_bound(ticketPrices.begin(), ticketPrices.end(), maxPrice);
        if (it != ticketPrices.begin()) {
            --it;
            cout << *it << endl;
            ticketPrices.erase(it);
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
*/
/*
#include <iostream>
#include <set>
#include <iterator>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  n, m;
    cin >> n >> m;

    multiset<long long > ticketPrices;
    for (int i = 0; i < n; ++i) {
        long long  price;
        cin >> price;
        ticketPrices.insert(price);
    }

    for (long long  i = 0; i < m; ++i) {
        long long  maxPrice;
        cin >> maxPrice;

        auto it = ticketPrices.upper_bound(maxPrice);
        if (it == ticketPrices.begin()) {
             cout << -1 << endl;
             continue;
        }
        else
        {
            --it;
            cout << *it << endl;
            ticketPrices.erase(it);

        }
    }

    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
	ll n, m;
	cin >> n >> m;
	multiset<ll> price_of_ticket;
	for (ll i = 0; i < n; i++)
	{
		ll price;
		cin >> price;
		price_of_ticket.insert(price);
	}
	for (ll i = 0; i < m; i++)
	{
		ll price_paid_by_customer;
		cin >> price_paid_by_customer;

		auto it = price_of_ticket.upper_bound(price_paid_by_customer);
		if (it == price_of_ticket.begin())
		{
			cout << -1 << endl;
			continue;
		}
		else
		{
			cout << *(--it) << endl;
			price_of_ticket.erase(it);
		}
	}
	return 0;
}
int main()
{
	int testCase=1;
	while(testCase--){
		solve();
	}
	return 0;
}
