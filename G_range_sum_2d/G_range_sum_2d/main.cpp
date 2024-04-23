

#include <iostream>
using namespace std;
int main()
{
	int n, m, q;
	cin >> n >> m >> q;
	long long a[n+10][m+10]={};
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			a[i][j] += a[i][j - 1];
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			a[i][j] += a[i - 1][j];
		}
	}
	for (int c = 0; c < q; c++)
	{
		int i, j, k, l;
		cin >> i >> j >> k >> l;
		cout << a[k][l] - a[i-1][l] - a[k][j-1] + a[i-1][j-1] << endl;
	}
}
