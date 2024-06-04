/*#include <iostream>

using namespace std;

int main()
{
    int town,index;
    cin>>town>>index;
    int arr[town+1];
    int cntr=0;
    for(int i=1;i<=town;i++)
    {
        cin>>arr[i];
        cntr+=arr[i];
    }
    for(int i=1;i<index&&i<=town-index;i++)
    {
        if(arr[index-i]+arr[index+i]==1)
        {
            cntr--;
        }
    }
    cout<<cntr<<endl;


    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
    int town, index;
    cin >> town >> index;
    int arr[town + 1];
    int cntr = 0;
    for ( int i = 1; i <= town; i++)
    {
        cin >> arr[i];
        cntr += arr[i];
    }


    for (int  i = 1; i < index && i <= town - index; i++)
    {
        if (arr[index - i] + arr[index + i] == 1)
        {
            cntr--;
        }
    }


    cout << cntr << endl;

    return 0;
}



