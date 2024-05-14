#include <iostream>

using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    for(int i=1;i<=10008;i++)
    {
        if((k*i)%10==0)
        {
            cout<<i<<endl;
            break;
        }
        if((k*i-r)%10==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
