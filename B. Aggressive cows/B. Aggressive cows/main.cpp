#include <iostream>
#include<algorithm>
using namespace std;
//dist =mid
bool canPlaceCows(int arr[],int n,int cows,int dist)
{
    int cntr=1;
    int lastPosition=arr[0];
    for(int i=1;i<=n;i++)
    {
        if(arr[i]-lastPosition>=dist)
        {
            cntr++;
            lastPosition=arr[i];
            if(cntr==cows)
            {
                return true;
            }
        }
    }
    return false ;
}

int main()
{
    int n,cows;
    cin>>n>>cows;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int l=0,r=arr[n-1] - arr[0],mid;
    int result =0;
    while (l<=r)
    {
        mid=l+(r-l)/2;
        if(canPlaceCows(arr,n,cows,mid))
        {
            result=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }

    }
    cout<<result<<endl;
    return 0;
}


/*
#include <iostream>
#include <algorithm>

using namespace std;

// Function to check if a minimum distance 'dist' can be maintained between cows
bool canPlaceCows(int arr[], int n, int c, int dist) {
    int count = 1; // Place the first cow in the first stall
    int last_position = arr[0]; // Position of the first cow

    for (int i = 1; i < n; i++) {
        if (arr[i] - last_position >= dist) {
            count++; // Place next cow
            last_position = arr[i]; // Update the last position
            if (count == c) {
                return true; // All cows have been placed successfully
            }
        }
    }
    return false; // Unable to place all cows with the given minimum distance
}

int main() {
    int n, c;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array to facilitate binary search
    sort(arr, arr + n);

    int l = 1; // Lower bound of the minimum distance
    int h = arr[n-1] - arr[0]; // Upper bound of the minimum distance
    int result = 0;

    // Binary search for the largest minimum distance
    while (l <= h) {
        int mid = (l + h) / 2;
        if (canPlaceCows(arr, n, c, mid)) {
            result = mid; // Update the result
            l = mid + 1; // Try for a larger distance
        } else {
            h = mid - 1; // Try for a smaller distance
        }
    }

    cout << result << endl;
    return 0;
}
*/
