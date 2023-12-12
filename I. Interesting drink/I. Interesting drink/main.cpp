
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int n, q;
  cin >> n;
  int prices[n];
  for(int i=0;i<n;i++)
  {
      cin>>prices[i];
  }
  sort(prices,prices+n);

  cin>>q;
  for(int i=0;i<q;i++)
  {
      int priceOfDays;
      cin>>priceOfDays;
       int left = 0, right = n - 1,cntr=0;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (prices[mid] <=priceOfDays )
            {
                cntr=mid+1;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        cout<<cntr<<endl;
  }
  return 0;
}

