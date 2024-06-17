//simple and easy solution
/*#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

            cout<<arr[0]<<endl;

    }
    return 0;
}

*/
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int xorr=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            xorr^=arr[i];
        }
         for(int i=0;i<n;i++)
        {

            if((xorr^=arr[i])==arr[i])
            {
                cout<<arr[i]<<endl;
                break;
            }
        }

    }
    return 0;
}
