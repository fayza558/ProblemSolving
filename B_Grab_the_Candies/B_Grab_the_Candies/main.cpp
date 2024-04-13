

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        int minai = 0, biance = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                minai += arr[i];
            }
            else
            {
                biance += arr[i];
            }
        }
        if (minai > biance)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        delete[] arr;
    }

    return 0;
}





