#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p1,p2,p3;
        cin>>p1>>p2>>p3;
        int sum=p1+p2+p3;
        if(sum%2!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(p1+p2<=p3)
               {
                   cout<<p1+p2<<endl;
               }
                else if(p3<p1+p2)
                {
                    cout<<sum/2<<endl;
                }
        }
    }
    return 0;
}
