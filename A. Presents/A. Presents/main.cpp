
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int freq[n];

    for (int i = 0; i < n; i++) {
        int x = arr[i];
        freq[x - 1] = i + 1;
    }

    for(int i = 0; i < n; i++)
    {
        cout << freq[i] << " ";
    }

    return 0;
}


//another solution but its time complexity is bigger
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==arr[j])
            {
                cout<<j<<" ";
            }
        }
    }


    return 0;
}
