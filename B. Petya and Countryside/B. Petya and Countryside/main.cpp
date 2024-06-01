

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int cntr = 1;
    int max_elementt = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {

        cntr = 1;


        for (int j = i; j > 0; j--)
        {
            if (arr[j] >= arr[j - 1])
            {
                cntr++;
            }
            else
            {
                break;
            }
        }


        for (int z = i; z < n - 1; z++)
        {
            if (arr[z] >= arr[z + 1])
            {
                cntr++;
            }
            else
            {
                break;
            }
        }


        if (cntr > max_elementt)
        {
            max_elementt = cntr;
        }
    }

    cout << max_elementt << endl;
    return 0;
}
